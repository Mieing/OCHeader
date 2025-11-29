@class IESSoloKTVImageMetalView, IESSCMetalImage, IESLiveKtvAtmosphereVideoFrameColorData, IESSoloKTVGradientBackgroundRender;

@interface IESSoloKTVGradientBackgroundView : UIView

@property (retain, nonatomic) IESSoloKTVImageMetalView *mtkView;
@property (retain, nonatomic) IESSoloKTVGradientBackgroundRender *render;
@property (retain, nonatomic) IESLiveKtvAtmosphereVideoFrameColorData *firstFrameColor;
@property (retain, nonatomic) IESSCMetalImage *firstFrameImage;

- (double)currentFps;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimate;
- (void)startAnimate;
- (id)getImageTexture;
- (void)updateWithColors:(id)a0;
- (void)resumeAnimate;
- (void)pauseAnimate;
- (void)showFirstFrame:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
