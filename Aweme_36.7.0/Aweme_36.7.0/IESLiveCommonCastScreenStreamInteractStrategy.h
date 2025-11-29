@class UIImage, IESLiveInteractOpenContainerCastInfo, IESLiveGCDTimer;
@protocol IESLiveStreamCaptureProvider;

@interface IESLiveCommonCastScreenStreamInteractStrategy : IESLiveCommonCastScreenStreamBaseStrategy

@property (retain, nonatomic) id<IESLiveStreamCaptureProvider> streamCaptureProvider;
@property (retain, nonatomic) IESLiveInteractOpenContainerCastInfo *processInfo;
@property (nonatomic) long long runningStatus;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) unsigned long long videoPreviewMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } openContainerStreamLayout;
@property (nonatomic) struct CGSize { double width; double height; } openContainerAdaptedOutputSize;
@property (nonatomic) struct __CVBuffer { } *preFrame;
@property (nonatomic) struct CGSize { double width; double height; } canvasOutputSize;
@property (nonatomic) struct CGSize { double width; double height; } openContainerOutputSize;
@property (nonatomic) BOOL shouldAddCameraPreviewInput;
@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (retain, nonatomic) UIImage *castBackground;
@property (nonatomic) BOOL isResume;

- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)a0;
- (void)setupCastContext;
- (void)resetCastContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castScreenStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAnchorPreviewLayout;
- (void)updateRTCInfoWithOpenContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupBackgroundImage:(id)a0;
- (void)stopPushLastFrameBuffer;
- (void)switch2openContanerCastModeIfNeeded;
- (void)setupBackgroundImageStream;
- (void)switch2videoCaptureMode;
- (void)switch2openContanerCastModeDefault;
- (void)startPushLastFrameBuffer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })openContainerStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)switch2openContanerCastModeWithAnchorPreviewEnable;
- (void)handleBackgroundImageStream;
- (id)cameraPreview;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentPTS;

@end
