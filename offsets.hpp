#pragma once
#include <cstdint>
inline std::string ClientVersion = "version-5cf2272675e145f5";

//Total offsets: 234

namespace offsets {

    namespace Animation {
        inline constexpr uintptr_t AnimationId = 0xD8;
    }

    namespace BasePart {
        inline constexpr uintptr_t BrickColor = 0x194;
        inline constexpr uintptr_t CastShadow = 0xF5;
        inline constexpr uintptr_t Locked = 0xF6;
        inline constexpr uintptr_t Massless = 0xF7;
        inline constexpr uintptr_t Primitive = 0x148;
        inline constexpr uintptr_t Reflectance = 0xEC;
        inline constexpr uintptr_t Shape = 0x1B1;
        inline constexpr uintptr_t Transparency = 0xF0;
    }

    namespace Beam {
        inline constexpr uintptr_t Brightness = 0x198;
        inline constexpr uintptr_t Color = 0x124;
        inline constexpr uintptr_t LightEmission = 0x1A4;
        inline constexpr uintptr_t LightInfluence = 0x1A8;
    }

    namespace BloomEffect {
        inline constexpr uintptr_t Intensity = 0xD0;
        inline constexpr uintptr_t Size = 0xD4;
        inline constexpr uintptr_t Threshold = 0xD8;
    }

    namespace ByteCode {
        inline constexpr uintptr_t Pointer = 0x10;
        inline constexpr uintptr_t Size = 0x20;
    }

    namespace Camera {
        inline constexpr uintptr_t FOV = 0x160;
        inline constexpr uintptr_t Focus = 0x128;
        inline constexpr uintptr_t Position = 0x11C;
        inline constexpr uintptr_t Rotation = 0xF8;
        inline constexpr uintptr_t Subject = 0xE8;
        inline constexpr uintptr_t Type = 0x158;
        inline constexpr uintptr_t ViewportInt16 = 0x2AC;
        inline constexpr uintptr_t ViewportSize = 0x2E8;
    }

    namespace CharacterMesh {
        inline constexpr uintptr_t BaseTextureId = 0xE0;
        inline constexpr uintptr_t BodyPart = 0x160;
        inline constexpr uintptr_t MeshId = 0x110;
        inline constexpr uintptr_t OverlayTextureId = 0x140;
    }

    namespace ConcurrentRakPeerPacketJob {
        inline constexpr uintptr_t ToRakPeer = 0x1D0;
    }

    namespace DataModel {
        inline constexpr uintptr_t ClientReplicator = 0x408;
        inline constexpr uintptr_t CoreGuiService = 0x368;
        inline constexpr uintptr_t CreatorId = 0x198;
        inline constexpr uintptr_t GameId = 0x1A0;
        inline constexpr uintptr_t GameLoaded = 0x670;
        inline constexpr uintptr_t GuiRoot = 0x3E8;
        inline constexpr uintptr_t JobId = 0x138;
        inline constexpr uintptr_t PlaceId = 0x1A8;
        inline constexpr uintptr_t PlaceVersion = 0x1C4;
        inline constexpr uintptr_t PrimitiveCount = 0x401;
        inline constexpr uintptr_t RunService = 0x3C8;
        inline constexpr uintptr_t ScriptContext = 0x440;
        inline constexpr uintptr_t ServerIp = 0x658;
        inline constexpr uintptr_t StarterGuiService = 0x398;
        inline constexpr uintptr_t StarterPackService = 0x388;
        inline constexpr uintptr_t StarterPlayerService = 0x3A8;
        inline constexpr uintptr_t ToRenderView1 = 0x1E0;
        inline constexpr uintptr_t ToRenderView2 = 0x8;
        inline constexpr uintptr_t ToRenderView3 = 0x28;
        inline constexpr uintptr_t UserInputService = 0x3D8;
        inline constexpr uintptr_t VerbContainer = 0x3F8;
        inline constexpr uintptr_t Workspace = 0x178;
    }

    namespace Decal {
        inline constexpr uintptr_t TextureId = 0x198;
    }

    namespace FFlags {
        inline constexpr uintptr_t DebugDisplayFPS = 0x7DEEF08;
        inline constexpr uintptr_t FFlagList = 0x83E9C40;
        inline constexpr uintptr_t FlagToValue = 0xC0;
        inline constexpr uintptr_t ForceNewAFKDurationPointer = 0x7798150;
        inline constexpr uintptr_t NextGenReplicatorEnabledWrite4 = 0x816F118;
        inline constexpr uintptr_t ReplicatorAnimationTrackLimitPerAnimator = 0x779A250;
        inline constexpr uintptr_t TaskSchedulerTargetFps = 0x8178DE0;
        inline constexpr uintptr_t ValueGetSet = 0x30;
        inline constexpr uintptr_t VoiceChatRollOffMaxDistance = 0x77D1820;
        inline constexpr uintptr_t VoiceChatRollOffMinDistance = 0x77D1808;
    }

    namespace FakeDataModel {
        inline constexpr uintptr_t DataModelDeleterPointer = 0x7BE9270;
        inline constexpr uintptr_t Pointer = 0x7c3d2e8;
        inline constexpr uintptr_t ToRealDataModel = 0x1D0;
    }

    namespace GuiObject {
        inline constexpr uintptr_t AbsolutePositionX = 0x110;
        inline constexpr uintptr_t AbsolutePositionY = 0x114;
        inline constexpr uintptr_t AbsoluteSizeX = 0x118;
        inline constexpr uintptr_t AbsoluteSizeY = 0x11C;
        inline constexpr uintptr_t BackgroundColor3 = 0x548;
        inline constexpr uintptr_t BorderColor3 = 0x554;
        inline constexpr uintptr_t LayoutOrder = 0x588;
        inline constexpr uintptr_t PositionOffsetX = 0x51C;
        inline constexpr uintptr_t PositionOffsetY = 0x524;
        inline constexpr uintptr_t PositionX = 0x518;
        inline constexpr uintptr_t PositionY = 0x520;
        inline constexpr uintptr_t Rotation = 0x188;
        inline constexpr uintptr_t SizeOffsetX = 0x540;
        inline constexpr uintptr_t SizeOffsetY = 0x544;
        inline constexpr uintptr_t SizeX = 0x538;
        inline constexpr uintptr_t SizeY = 0x53C;
    }

    namespace GuiRoot {
        inline constexpr uintptr_t FakeDataModelToRealDataModel = 0x1D0;
        inline constexpr uintptr_t ToFakeDataModel = 0x38;
    }

    namespace Highlight {
        inline constexpr uintptr_t Adornee = 0xD0;
    }

    namespace Humanoid {
        inline constexpr uintptr_t AutoJump = 0x1E0;
        inline constexpr uintptr_t AutoRotate = 0x1E1;
        inline constexpr uintptr_t AutomaticScalingEnabled = 0x1E2;
        inline constexpr uintptr_t BreakJointsOnDeath = 0x1E3;
        inline constexpr uintptr_t DisplayDistanceType = 0x18C;
        inline constexpr uintptr_t EvaluateStateMachine = 0x1E4;
        inline constexpr uintptr_t Health = 0x194;
        inline constexpr uintptr_t HealthDisplayDistance = 0x198;
        inline constexpr uintptr_t HealthDisplayType = 0x19C;
        inline constexpr uintptr_t HipHeight = 0x1A0;
        inline constexpr uintptr_t HumanoidState = 0x8A0;
        inline constexpr uintptr_t HumanoidStateId = 0x20;
        inline constexpr uintptr_t Jump = 0x1E5;
        inline constexpr uintptr_t JumpPower = 0x1B0;
        inline constexpr uintptr_t MaxHealth = 0x1B4;
        inline constexpr uintptr_t MaxSlopeAngle = 0x1B8;
        inline constexpr uintptr_t MoveDirection = 0x158;
        inline constexpr uintptr_t NameDisplayDistance = 0x1BC;
        inline constexpr uintptr_t NameOcclusion = 0x1C0;
        inline constexpr uintptr_t PlatformStand = 0x1E7;
        inline constexpr uintptr_t RequiresNeck = 0x1E9;
        inline constexpr uintptr_t RigType = 0x1CC;
        inline constexpr uintptr_t SeatPart = 0x120;
        inline constexpr uintptr_t Sit = 0x1E9;
        inline constexpr uintptr_t WalkSpeed = 0x1DC;
        inline constexpr uintptr_t WalkSpeedCheck = 0x3C4;
    }

    namespace InputObject {
        inline constexpr uintptr_t InputObject = 0x118;
        inline constexpr uintptr_t MousePosition = 0xEC;
    }

    namespace Instance {
        inline constexpr uintptr_t Children = 0x78;
        inline constexpr uintptr_t ChildrenSize = 0x8;
        inline constexpr uintptr_t ClassDescriptor = 0x18;
        inline constexpr uintptr_t ClassDescriptorToClassName = 0x8;
        inline constexpr uintptr_t Deleter = 0x10;
        inline constexpr uintptr_t Name = 0xB0;
        inline constexpr uintptr_t NameSize = 0x10;
        inline constexpr uintptr_t Parent = 0x70;
    }

    namespace Lighting {
        inline constexpr uintptr_t Ambient = 0xE0;
        inline constexpr uintptr_t Brightness = 0x128;
        inline constexpr uintptr_t ClockTime = 0x1C0;
        inline constexpr uintptr_t ColorShiftBottom = 0xEC;
        inline constexpr uintptr_t ColorShiftTop = 0xF8;
        inline constexpr uintptr_t FogColor = 0x104;
        inline constexpr uintptr_t FogEnd = 0x13C;
        inline constexpr uintptr_t FogStart = 0x140;
        inline constexpr uintptr_t GeographicLatitude = 0x198;
        inline constexpr uintptr_t GlobalShadows = 0x150;
        inline constexpr uintptr_t OutDoorAmbient = 0x110;
        inline constexpr uintptr_t ShadowColor = 0x11C;
    }

    namespace LocalPlayer {
        inline constexpr uintptr_t PlayerMouse = 0x1198;
    }

    namespace LocalScript {
        inline constexpr uintptr_t ByteCode = 0x1A8;
        inline constexpr uintptr_t GUID = 0xE8;
        inline constexpr uintptr_t Hash = 0x1B8;
    }

    namespace MeshContentProvider {
        inline constexpr uintptr_t AssetID = 0x10;
        inline constexpr uintptr_t Cache = 0xF0;
        inline constexpr uintptr_t LRUCache = 0x20;
        inline constexpr uintptr_t MeshData = 0x40;
        inline constexpr uintptr_t ToMeshData = 0x40;
    }

    namespace MeshData {
        inline constexpr uintptr_t FaceEnd = 0x38;
        inline constexpr uintptr_t FaceStart = 0x30;
        inline constexpr uintptr_t VertexEnd = 0x8;
        inline constexpr uintptr_t VertexStart = 0x0;
    }

    namespace MeshPart {
        inline constexpr uintptr_t MeshId = 0x2F8;
        inline constexpr uintptr_t TextureId = 0x328;
    }

    namespace ModelInstance {
        inline constexpr uintptr_t PrimaryPart = 0x278;
        inline constexpr uintptr_t Scale = 0x140;
    }

    namespace ModuleScript {
        inline constexpr uintptr_t ByteCode = 0x150;
        inline constexpr uintptr_t Hash = 0x160;
    }

    namespace Ping {
        inline constexpr uintptr_t Value = 0xC8;
    }

    namespace Player {
        inline constexpr uintptr_t AccountAge = 0x354;
        inline constexpr uintptr_t CameraMode = 0x368;
        inline constexpr uintptr_t Country = 0x130;
        inline constexpr uintptr_t DisplayName = 0x150;
        inline constexpr uintptr_t Gender = 0x1378;
        inline constexpr uintptr_t MaxZoomDistance = 0x360;
        inline constexpr uintptr_t MinZoomDistance = 0x364;
        inline constexpr uintptr_t ModelInstance = 0x2A0;
        inline constexpr uintptr_t PlatformName = 0x13B8;
        inline constexpr uintptr_t Team = 0x2D0;
        inline constexpr uintptr_t UserId = 0x308;
    }

    namespace Players {
        inline constexpr uintptr_t LocalPlayer = 0x148;
        inline constexpr uintptr_t RespawnTime = 0x160;
    }

    namespace Pointers {
        inline constexpr uintptr_t PlayerConfigurer = 0x7BEDFF0;
        inline constexpr uintptr_t Print = 0x1E6B8E0;
        inline constexpr uintptr_t Sensitivity = 0x7DA8A78;
        inline constexpr uintptr_t TaskScheduler = 0x8179078;
    }

    namespace Primitive {
        inline constexpr uintptr_t CFrame = 0xC8;
        inline constexpr uintptr_t Material = 0x23E;
        inline constexpr uintptr_t Position = 0xEC;
        inline constexpr uintptr_t PrimitiveFlags = 0x1B6;
        inline constexpr uintptr_t Rotation = 0xD0;
        inline constexpr uintptr_t RotationVelocity = 0x104;
        inline constexpr uintptr_t Size = 0x1B8;
        inline constexpr uintptr_t ValidateValue = 0x6;
        inline constexpr uintptr_t Velocity = 0xF8;
    }

    namespace PrimitiveFlags {
        inline constexpr uintptr_t AnchoredMask = 0x2;
        inline constexpr uintptr_t CanCollideMask = 0x8;
        inline constexpr uintptr_t CanTouchMask = 0x10;
    }

    namespace RenderJob {
        inline constexpr uintptr_t DataModel = 0x1C8;
        inline constexpr uintptr_t FakeDataModel = 0x38;
        inline constexpr uintptr_t ToRenderView = 0x1D0;
    }

    namespace RenderView {
        inline constexpr uintptr_t InvalidateLighting = 0x220;
        inline constexpr uintptr_t InvalidateSkyBox = 0x3F5;
        inline constexpr uintptr_t ToVisualEngine = 0x18;
    }

    namespace RunService {
        inline constexpr uintptr_t HeartbeatTask = 0x108;
    }

    namespace Sky {
        inline constexpr uintptr_t CelestialBodiesShown = 0x220;
        inline constexpr uintptr_t MoonAngularSize = 0x25C;
        inline constexpr uintptr_t MoonTextureId = 0xE0;
        inline constexpr uintptr_t SkyboxBk = 0x110;
        inline constexpr uintptr_t SkyboxDn = 0x140;
        inline constexpr uintptr_t SkyboxFt = 0x170;
        inline constexpr uintptr_t SkyboxLf = 0x1A0;
        inline constexpr uintptr_t SkyboxOrientation = 0x250;
        inline constexpr uintptr_t SkyboxRt = 0x1D0;
        inline constexpr uintptr_t SkyboxUp = 0x200;
        inline constexpr uintptr_t StarCount = 0x260;
        inline constexpr uintptr_t SunAngularSize = 0x264;
        inline constexpr uintptr_t SunTextureId = 0x230;
    }

    namespace SpecialMesh {
        inline constexpr uintptr_t MeshId = 0x110;
        inline constexpr uintptr_t Scale = 0xDC;
    }

    namespace TaskScheduler {
        inline constexpr uintptr_t JobEnd = 0xD0;
        inline constexpr uintptr_t JobName = 0x18;
        inline constexpr uintptr_t JobStart = 0xC8;
        inline constexpr uintptr_t JobType = 0x108;
        inline constexpr uintptr_t JobsPointer = 0x8179250;
    }

    namespace Team {
        inline constexpr uintptr_t TeamColor = 0xD0;
    }

    namespace TextLabel {
        inline constexpr uintptr_t RichText = 0xB58;
        inline constexpr uintptr_t Text = 0xDA8;
        inline constexpr uintptr_t TextColor3 = 0xE58;
    }

    namespace Texture {
        inline constexpr uintptr_t TextureId = 0x198;
    }

    namespace Tool {
        inline constexpr uintptr_t GripPosition = 0x4CC;
    }

    namespace Value {
        inline constexpr uintptr_t Value = 0xD0;
    }

    namespace VisualEngine {
        inline constexpr uintptr_t DataModel = 0x1D0;
        inline constexpr uintptr_t DeviceToSwapChain = 0xC8;
        inline constexpr uintptr_t Dimensions = 0xAB0;
        inline constexpr uintptr_t FakeDataModel = 0xA90;
        inline constexpr uintptr_t Pointer = 0x8306B58;
        inline constexpr uintptr_t ToDeviceD3D11 = 0x98;
        inline constexpr uintptr_t ToLighting = 0xBD0;
        inline constexpr uintptr_t ToRenderView = 0xBB8;
        inline constexpr uintptr_t ViewMatrix = 0x7D0;
    }

    namespace VoiceChatService {
        inline constexpr uintptr_t EnableDefaultVoice = 0x208;
    }

    namespace Workspace {
        inline constexpr uintptr_t Camera = 0x4C0;
        inline constexpr uintptr_t DistributedGameTime = 0x4E0;
        inline constexpr uintptr_t ReadOnlyGravity = 0x9D0;
        inline constexpr uintptr_t World = 0x418;
    }

    namespace World {
        inline constexpr uintptr_t Gravity = 0x210;
        inline constexpr uintptr_t PhysicsStepTime = 0x680;
        inline constexpr uintptr_t PrimitiveList = 0x288;
    }

}
