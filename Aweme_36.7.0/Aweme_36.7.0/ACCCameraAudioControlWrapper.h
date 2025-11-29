@class NSString;
@protocol VERecorderPublicProtocol;

@interface ACCCameraAudioControlWrapper : NSObject <ACCCameraBuildListener, ACCCameraAudioControlProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraProvider:(id)a0;
- (void)onCameraInit:(id)a0;
- (void)startVideoCaptureWithoutAuthCheckWithPrivacyCert:(id)a0;
- (void)stopVideoCaptureWithoutAuthCheckWithPrivacyCert:(id)a0;
- (void).cxx_destruct;
- (void)setAudioBufferCallback:(id /* block */)a0;

@end
