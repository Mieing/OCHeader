@class ACCCameraSubscription, NSString;
@protocol VERecorderPublicProtocol;

@interface ACCRecorderTemplateVideoWrapper : NSObject <ACCCameraBuildListener, ACCRecorderTemplateVideoProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTemplateVideoData:(id)a0 preview:(id)a1 firstFrameRenderCallback:(id /* block */)a2 durationCallback:(id /* block */)a3;
- (void)swapTemplateView;
- (void)removeTemplateVideo;
- (void)pauseTemplateVideo:(BOOL)a0 then:(id /* block */)a1;
- (void)resetMusicPlayRate;
- (void)updateMusicPlayRate:(double)a0;
- (void)setCameraProvider:(id)a0;
- (void)onCameraInit:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
