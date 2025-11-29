@class UIColor, NSArray, CADisplayLink, UIImage;

@interface IESLLTempoImageView : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) double accumulator;
@property (retain, nonatomic) NSArray *animationImages;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) UIColor *tintColor;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawRectForContentMode:(long long)a0 imageSize:(struct CGSize { double x0; double x1; })a1 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)beginDraw;
- (void)handleDisplayLink:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
