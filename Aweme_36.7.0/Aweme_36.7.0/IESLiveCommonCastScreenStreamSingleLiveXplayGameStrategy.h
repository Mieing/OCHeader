@class UIImage;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveCommonCastScreenStreamSingleLiveXplayGameStrategy : IESLiveCommonCastScreenStreamBaseStrategy

@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (retain, nonatomic) UIImage *castBackground;
@property (nonatomic) long long lastAnchorScreenStatus;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> effectProcessingService;

- (void)resumeScreenCastWithFirstFrame:(struct __CVBuffer { } *)a0;
- (void)setupCastContext;
- (void)resetCastContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castScreenStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAnchorPreviewLayout;
- (void)didSendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupBackgroundImage:(id)a0;
- (void)updateAnchorScreenStatus:(long long)a0;
- (void)setupBackgroundImageStream;
- (void)handleBackgroundImageStream;
- (void)setCameraOutputSize;
- (void)setupVideoCaptureWithAnchorScreenStatus:(long long)a0;
- (void).cxx_destruct;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end
