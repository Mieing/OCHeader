@class NSString;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveCommonCastScreenStreamSingleLiveNativeGameStrategy : IESLiveCommonCastScreenStreamBaseStrategy <IESLiveLGameLifeCycleAction, IESLiveLGameScreenCastAction>

@property (nonatomic) BOOL cameraOpenStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraRect;
@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> effectProcessingService;
@property (nonatomic) long long uiStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)app:(id)a0 orientationChange:(long long)a1;
- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)a0;
- (void)setupCastContext;
- (void)resetCastContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castScreenStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAnchorPreviewLayout;
- (void)didSendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupBackgroundImage:(id)a0;
- (void)nativeGameCameraStatusChange:(BOOL)a0;
- (void)nativeGameUpdateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)openGameCameraCapture;
- (void)updateCameraRectAndOutputSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeCamera;
- (BOOL)gameIsLandscape;
- (struct CGSize { double x0; double x1; })getAdaptSize:(struct CGSize { double x0; double x1; })a0 isLandscape:(BOOL)a1;
- (void)updateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCameraOutputSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreCameraRotation;
- (void)rotateCameraIfNeed;
- (BOOL)liveIsTop;
- (void)rotateCamera;
- (void)openCamera;
- (void).cxx_destruct;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end
