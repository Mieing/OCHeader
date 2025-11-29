@class NSString;
@protocol VERecorderPublicProtocol;

@interface ACCCameraLiveWrapper : NSObject <ACCCameraBuildListener, ACCCameraWrapper, ACCCameraLiveProtocol>

@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraProvider:(id)a0;
- (void)onCameraInit:(id)a0;
- (id)cameraInstance;
- (void)afterEnterLiveMode;
- (void)beforeExitLiveMode;
- (void).cxx_destruct;

@end
