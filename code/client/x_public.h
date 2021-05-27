#pragma once

#include "../qcommon/q_shared.h"

void X_InitXMod();

void X_InitAfterCGameVM();
void X_StopAfterCGameVM();

qboolean X_HckActive();
qboolean X_IsPK3PureCompatible(const char* mode, const char* basename);

sfxHandle_t X_Event_ReplaceSoundOnSoundStart(int entity, sfxHandle_t sound);
void X_Event_OnSoundStart(int entityNum, vec3_t origin, char* soundName);
void X_Event_OnGetSnapshot(snapshot_t* snapshot);
void X_Event_OnConfigstringModified(int index);
qboolean X_Event_OnServerCommand(char* cmd, qboolean* result);
void X_Event_OnDrawScreen();
void X_Event_OnChatCommand(field_t* field);

void X_Hook_AddLoopingSound(int entityNum, const vec3_t origin, const vec3_t velocity, sfxHandle_t sfx);
void X_Hook_UpdateEntityPosition(int entityNum, const vec3_t origin);

void X_Hook_CGame_Cvar_SetSafe(const char* var_name, const char* value);

int	X_Hook_FS_GetFileList(const char* path, const char* extension, char* listbuf, int bufsize);

qhandle_t X_Hud_GetConsoleFontShader();
qhandle_t X_Hud_GetOverlayFontShader();

void X_Hud_TurnOffForcedTransparency();
void X_Hud_TurnOnForcedTransparency();

qboolean X_Net_ShowCommands();
