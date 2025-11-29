@class NSString;
@protocol VERecorderPublicProtocol;

@interface ACCCameraARWrapper : NSObject <ACCCameraBuildListener, ACCCameraARProtocol>

@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraProvider:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)a0;
- (void)propertySet:(id)a0;
- (void).cxx_destruct;

@end
