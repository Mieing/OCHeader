@class ACCCameraSubscription, NSString;
@protocol VERecorderPublicProtocol;

@interface ACCRecorderDuetWrapper : NSObject <ACCCameraBuildListener, ACCRecorderDuetProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMusicNeedRepeat:(BOOL)a0;
- (void)setCameraProvider:(id)a0;
- (void)onCameraInit:(id)a0;
- (void)switchDuetModeWithlocalVideoUrl:(id)a0 complete:(id /* block */)a1;
- (void)swtichNormalModeWithComplete:(id /* block */)a0;
- (void)updateCaptureSourcePhotoWithComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
