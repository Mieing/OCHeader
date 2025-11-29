@class NSString, AWECameraPreviewContainerView;
@protocol VERecorderPublicProtocol;

@interface ACCMultiCameraWrapper : NSObject <ACCCameraBuildListener, ACCMultiCameraProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (weak, nonatomic) AWECameraPreviewContainerView *preview;
@property (weak, nonatomic) AWECameraPreviewContainerView *secondPreview;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchCameraWithView:(id)a0 config:(id)a1 cameraComplete:(id /* block */)a2;
- (id)currentSystemPressureState;
- (void)captureSourcePhotoAsImageByUser:(BOOL)a0 completionHandler:(id /* block */)a1 afterProcess:(BOOL)a2;
- (void)setSkipFrontOrSecondEffectInMultiCam:(long long)a0;
- (void)setSkipFrontCamEffectInMultiCam:(BOOL)a0;
- (void)setSkipSecondCamEffectInMultiCam:(BOOL)a0;
- (void)setSkipBinnedFormatInMultiCam:(long long)a0;
- (void)setCameraProvider:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)a0;
- (id)cameraInstance;
- (void).cxx_destruct;
- (BOOL)isMultiCamSession;
- (void)addSubscriber:(id)a0;

@end
