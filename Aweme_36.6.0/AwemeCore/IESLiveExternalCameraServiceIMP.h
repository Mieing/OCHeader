@class IESLiveExternalCameraSink, NSString, IESLiveExternalCameraKeepLivingService;
@protocol IESLiveRecoder, IESLiveExternalCameraLinkEvents;

@interface IESLiveExternalCameraServiceIMP : IESLiveGeneralBaseService <IESLiveExternalCameraService, IESLiveGuideActions, IESLiveAnchorRoomStatusChangeEvents, IESLiveExternalCameraSinkProtocol, IESLiveExternalCameraEvents>

@property (retain, nonatomic) IESLiveExternalCameraSink *sink;
@property (retain, nonatomic) id<IESLiveExternalCameraLinkEvents> linkEvents;
@property (retain, nonatomic) id<IESLiveRecoder> oldRecoder;
@property (retain, nonatomic) id<IESLiveRecoder> recoder;
@property (copy, nonatomic) NSString *rtmpURL;
@property (nonatomic) unsigned long long selectedCameraType;
@property (copy, nonatomic) NSString *selectedResolutionKey;
@property (copy, nonatomic) NSString *direction;
@property (retain, nonatomic) IESLiveExternalCameraKeepLivingService *keepLivingService;
@property (nonatomic) BOOL isExternalCameraLive;
@property (nonatomic) BOOL updatingNewRecoder;
@property (nonatomic) BOOL isStartLiving;
@property (copy, nonatomic) NSString *cameraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)onAppWillEnterForeground;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)willStartLive;
- (void)cameraDidSet;
- (void)stopCast;
- (void)didStartWithRtmpURL:(id)a0;
- (void)didDisconnectWithExtraInfo:(id)a0;
- (void)receiveVideoBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)receiveAudioData:(id)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)createCast;
- (void)startCast;
- (void)setupSelectedResolutionKey:(id)a0 selectedCameraType:(unsigned long long)a1 direction:(id)a2;
- (void)setupConnectCameraInfo:(id)a0;
- (void)disconnectByteLink;
- (BOOL)deviceSinkConnected;
- (void)revertRecoder;
- (BOOL)useExternalDeviceLive;
- (void)keepExternalLiveAlive;
- (void)changeToBuildInAudioCapture;
- (void)pauseSinkDeviceVideoBuffer;
- (void)resumeSinkDeviceVideoBuffer;
- (void)pauseSinkDeviceAudioData;
- (void)resumeSinkDeviceAudioData;
- (void)startPushFakeAudioData;
- (void)stopPushFakeAudioData;
- (void)changeRecoderToMultiDevice;
- (BOOL)isCameraNotAuthorized;
- (void)didSinkDeviceStateEvent:(id)a0;
- (void)startKeepLiving;
- (void)showUninstallError;
- (id)connectCameraInfo;
- (void).cxx_destruct;
- (id)encryptionKey;
- (void)didConnect;
- (void)onError:(id)a0;
- (void)didStop;

@end
