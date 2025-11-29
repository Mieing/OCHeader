@class NSString;

@interface IESLiveGuideExternalCameraFragment : IESLiveGuideComponent <IESLiveExternalCameraJSBHandleService, IESLiveExternalCameraLinkEvents, IESLiveGuideExternalCameraDisconnectDelegate, IESLiveGuideOpenLiveAdditionalEvent>

@property (copy, nonatomic) NSString *cameraType;
@property (copy, nonatomic) NSString *cameraName;
@property (copy, nonatomic) NSString *cameraSource;
@property (copy, nonatomic) NSString *connectStatus;
@property (copy, nonatomic) NSString *selectedQualityKey;
@property (nonatomic) unsigned long long oldRatio;
@property (nonatomic) unsigned long long curRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)didClickCancel;
- (void)appendOpenLiveRequestParams:(id)a0 completion:(id /* block */)a1;
- (void)appendStartLiveTrackParams:(id)a0 room:(id)a1 completion:(id /* block */)a2;
- (void)didStartWithRtmpURL:(id)a0;
- (void)didDisconnectWithExtraInfo:(id)a0;
- (void)receiveVideoBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)receiveAudioData:(id)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)p_trackClickWithTitle:(id)a0;
- (void)p_showTracker;
- (BOOL)canOpenScheme:(id)a0;
- (void)didClickRestart;
- (id)getExternalCameraInfoModel;
- (void)connectExternalCameraWithSelectedResolutionKey:(id)a0 cameraType:(unsigned long long)a1 direction:(id)a2;
- (void)disconnectExternalCamera;
- (void)setupExternalCameraLiveOpenSourceParams:(id)a0;
- (void)showDisconnectPanel;
- (void)p_trackConnectStatus;
- (void)hideDisconnectPanel;
- (BOOL)isRegisteredCanOpenURLScheme:(id)a0;
- (void).cxx_destruct;
- (void)didConnect;
- (void)onError:(id)a0;
- (void)didStop;

@end
