#pragma once

#if !defined(XGFX_VULKAN) && !defined(XGFX_OPENGL) &&                          \
    !defined(XGFX_DIRECTX12) && !defined(XGFX_DIRECTX11) &&                    \
    !defined(XGFX_METAL)
#error                                                                         \
    "Define either XGFX_VULKAN, XGFX_OPENGL, XGFX_DIRECTX12, XGFX_DIRECTX11, and/or XGFX_METAL before #include \"CrossWindow/ImGui.h\""
#endif

#if defined(XGFX_DIRECTX12)
#include "ImGui/DirectX12.h"
#endif

#if defined(XGFX_OPENGL)
#include "ImGui/OpenGL.h"
#endif