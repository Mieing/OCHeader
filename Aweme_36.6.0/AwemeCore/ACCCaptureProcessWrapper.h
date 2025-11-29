@class NSString;
@protocol VERecorderPublicProtocol;

@interface ACCCaptureProcessWrapper : NSObject <ACCCameraBuildListener, ACCCaptureProcessProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraProvider:(id)a0;
- (void)onCameraInit:(id)a0;
- (void)openAysnLoadAlgorithm;
- (void)setShakingDetectEnable:(BOOL)a0 param:(id)a1;
- (void)updateConfigShakingDetectWithParam:(id)a0;
- (void)setImageDefinitionDetectEnable:(BOOL)a0 param:(id)a1;
- (void)updateConfigImageDefinitionDetectParam:(id)a0;
- (void).cxx_destruct;

@end
