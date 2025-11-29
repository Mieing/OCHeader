@class NSString;

@interface IESLiveAnchorExternalCameraFragment : IESLiveRoomComponent <IESLiveExternalCameraLinkEvents>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDestroy;
- (void)didStartWithRtmpURL:(id)a0;
- (void)didDisconnectWithExtraInfo:(id)a0;
- (void)receiveVideoBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)receiveAudioData:(id)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)handleKeepLive;
- (void)p_trackClickWithTitle:(id)a0;
- (void)p_showTracker;
- (void)showDisconnectAlert;
- (void)didConnect;
- (void)onError:(id)a0;
- (void)didStop;

@end
