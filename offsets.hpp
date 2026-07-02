/*
	Dumped using: Polaris 1.0.0
	Made by Xdblaze | GrassBlock
	Website: Dumper.Polaris.Ninja
	Roblox Version: version-5cf2272675e145f5
	Total Offsets: 111
*/

#pragma once
#include <cstdint>

namespace Offsets {
	namespace FFlagList {
		inline uintptr_t Pointer = 0x843D0A8;
		inline uintptr_t Value = 0xC0;
	}

	namespace TaskScheduler {
		inline uintptr_t Pointer = 0x81CC868;
		inline uintptr_t Jobs = 0xC8;
		inline uintptr_t JobName = 0x18;
		inline uintptr_t Fpscap = 0xB0;
	}

	namespace VisualEngine {
		inline uintptr_t Pointer = 0x835A548;
		inline uintptr_t DeviceD3D11 = 0x98;
		inline uintptr_t ID3D11Device = 0x1C0;
		inline uintptr_t IDXGISwapChain = 0xC8;
		inline uintptr_t WindowHandle = 0xC0;
		inline uintptr_t RenderView = 0xBB8;
		inline uintptr_t Dimensions = 0xAB0;
		inline uintptr_t Lighting = 0xBD0;
		inline uintptr_t FakeDataModel = 0xA90;
	}

	namespace FakeDataModel {
		inline uintptr_t Pointer = 0x7C3D2E8;
		inline uintptr_t DataModel = 0x1D0;
	}

	namespace DataModel {
		inline uintptr_t GameLoaded = 0x658;
		inline uintptr_t Workspace = 0x160;
		inline uintptr_t CreatorId = 0x180;
		inline uintptr_t GameId = 0x188;
		inline uintptr_t PlaceId = 0x190;
		inline uintptr_t JobId = 0x120;
	}

	namespace RenderView {
		inline uintptr_t LightingValid = 0x228;
		inline uintptr_t SkyValid = 0x3FD;
	}

	namespace Instance {
		inline uintptr_t This = 0x8;
		inline uintptr_t Name = 0x98;
		inline uintptr_t Parent = 0x68;
		inline uintptr_t Children = 0x70;
		inline uintptr_t ClassDescriptor = 0x18;
	}

	namespace Misc {
		inline uintptr_t Value = 0xB8;
	}

	namespace ClassDescriptor {
		inline uintptr_t ClassName = 0x8;
		inline uintptr_t DescriptorBase = 0x230;
		inline uintptr_t PropertyDescriptors = 0x40;
	}

	namespace PropertyDescriptor {
		inline uintptr_t Name = 0x8;
	}

	namespace Workspace {
		inline uintptr_t World = 0x3F8;
		inline uintptr_t CurrentCamera = 0x4A0;
	}

	namespace World {
		inline uintptr_t Gravity = 0x210;
		inline uintptr_t WorldSteps = 0x680;
	}

	namespace MouseService {
		inline uintptr_t InputObject = 0x100;
	}

	namespace InputObject {
		inline uintptr_t MousePosition = 0xD4;
	}

	namespace Lighting {
		inline uintptr_t Sky = 0x1C8;
		inline uintptr_t Ambient = 0xC8;
		inline uintptr_t ClockTime = 0x1A8;
		inline uintptr_t GlobalShadows = 0x138;
		inline uintptr_t ShadowSoftness = 0x130;
		inline uintptr_t OutdoorAmbient = 0xF8;
		inline uintptr_t GeographicLatitude = 0x180;
		inline uintptr_t Atmosphere = 0x1D8;
		inline uintptr_t Brightness = 0x110;
		inline uintptr_t FogStart = 0x128;
		inline uintptr_t FogEnd = 0x124;
		inline uintptr_t FogColor = 0xEC;
		inline uintptr_t ExposureCompensation = 0x11C;
		inline uintptr_t EnvironmentDiffuseScale = 0x114;
		inline uintptr_t EnvironmentSpecularScale = 0x118;
		inline uintptr_t ColorShiftTop = 0xE0;
		inline uintptr_t ColorShiftBottom = 0xD4;
	}

	namespace LightingParameters {
		inline uintptr_t TrueSunPosition = 0x168;
		inline uintptr_t TrueMoonPosition = 0x174;
		inline uintptr_t SkyAmbient = 0x140;
		inline uintptr_t SkyAmbient2 = 0x184;
		inline uintptr_t LightDirection = 0x158;
		inline uintptr_t LightColor = 0x14C;
		inline uintptr_t Source = 0x164;
	}

	namespace Terrain {
		inline uintptr_t GrassLength = 0x188;
		inline uintptr_t WaterColor = 0x178;
		inline uintptr_t WaterTransparency = 0x194;
		inline uintptr_t WaterReflectance = 0x190;
		inline uintptr_t WaterWaveSpeed = 0x19C;
		inline uintptr_t WaterWaveSize = 0x198;
	}

	namespace Player {
		inline uintptr_t LocalPlayer = 0x130;
		inline uintptr_t UserId = 0x2F0;
		inline uintptr_t DisplayName = 0x138;
		inline uintptr_t LocaleId = 0xD8;
		inline uintptr_t CameraMode = 0x360;
		inline uintptr_t TeamColor = 0x39C;
		inline uintptr_t Team = 0x2C8;
		inline uintptr_t ModelInstance = 0x298;
		inline uintptr_t CharacterAppearanceId = 0x2F0;
		inline uintptr_t CameraMaxZoomDistance = 0x358;
		inline uintptr_t CameraMinZoomDistance = 0x35C;
	}

	namespace Team {
		inline uintptr_t BrickColor = 0xB8;
	}

	namespace Humanoid {
		inline uintptr_t Sit = 0x1DE;
		inline uintptr_t Jump = 0x1DA;
		inline uintptr_t PlatformStand = 0x1DC;
		inline uintptr_t WalkSpeed = 0x1D0;
		inline uintptr_t WalkSpeedCheck = 0x3BC;
		inline uintptr_t Health = 0x188;
		inline uintptr_t MaxHealth = 0x1A8;
		inline uintptr_t JumpPower = 0x1A4;
		inline uintptr_t JumpHeight = 0x1A0;
		inline uintptr_t UseJumpPower = 0x1E0;
		inline uintptr_t AutoJumpEnabled = 0x1D4;
		inline uintptr_t HipHeight = 0x194;
		inline uintptr_t MaxSlopeAngle = 0x1AC;
		inline uintptr_t RequiresNeck = 0x1DD;
		inline uintptr_t AutoRotate = 0x1D5;
		inline uintptr_t RigType = 0x1C0;
		inline uintptr_t WalkToPart = 0x118;
		inline uintptr_t WalkToPoint = 0x164;
		inline uintptr_t IsWalking = 0x917;
		inline uintptr_t WalkTimer = 0x408;
		inline uintptr_t NameOcclusion = 0x1B4;
		inline uintptr_t NameDisplayDistance = 0x1B0;
		inline uintptr_t DisplayDistanceType = 0x180;
		inline uintptr_t HealthDisplayDistance = 0x18C;
		inline uintptr_t HealthDisplayType = 0x190;
		inline uintptr_t AutomaticScalingEnabled = 0x1D6;
		inline uintptr_t BreakJointsOnDeath = 0x1D7;
		inline uintptr_t EvaluateStateMachine = 0x1D8;
	}
}
