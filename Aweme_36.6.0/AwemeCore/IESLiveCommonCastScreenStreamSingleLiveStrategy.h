@class UIImage;

@interface IESLiveCommonCastScreenStreamSingleLiveStrategy : IESLiveCommonCastScreenStreamBaseStrategy

@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (retain, nonatomic) UIImage *castBackground;

- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)a0;
- (void)setupCastContext;
- (void)resetCastContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castScreenStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAnchorPreviewLayout;
- (void)didSendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupBackgroundImage:(id)a0;
- (void)setupBackgroundImageStream;
- (void)handleBackgroundImageStream;
- (struct CGSize { double x0; double x1; })p_castCameraSize;
- (double)p_castCameraRightPadding;
- (double)p_castCameraBottomPadding;
- (void).cxx_destruct;
- (void)startVideoCapture;

@end
