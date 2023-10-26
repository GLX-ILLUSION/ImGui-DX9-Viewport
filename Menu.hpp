#pragma once

#include "imgui/imgui.h"
#include <d3d9.h>
#include <tchar.h>

void InitMenu(ImGuiIO& io);

bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void ResetDevice();

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

static ULONG Width = (GetSystemMetrics)(SM_CXSCREEN) / 3;
static ULONG Height = (GetSystemMetrics)(SM_CYSCREEN) / 3;

extern LPDIRECT3D9              g_pD3D;
extern LPDIRECT3DDEVICE9        g_pd3dDevice;
extern UINT                     g_ResizeWidth;
extern UINT                     g_ResizeHeight;
extern D3DPRESENT_PARAMETERS    g_d3dpp;
extern ImVec4 clear_color;
extern ImGuiIO& io;
