@class NSString, FLAnimatedImage, UIImage, CADisplayLink;

@interface FLAnimatedImageView : UIImageView

@property (retain, nonatomic) UIImage *currentFrame;
@property (nonatomic) unsigned long long currentFrameIndex;
@property (nonatomic) unsigned long long loopCountdown;
@property (nonatomic) double accumulator;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL needsDisplayWhenImageBecomesAvailable;
@property (retain, nonatomic) FLAnimatedImage *animatedImage;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (copy, nonatomic) NSString *runLoopMode;

+ (id)defaultRunLoopMode;

- (void)updateShouldAnimate;
- (double)frameDelayGreatestCommonDivisor;
- (id)initWithImage:(id)a0;
- (void)stopAnimating;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimating;
- (void).cxx_destruct;
- (BOOL)isAnimating;
- (void)setImage:(id)a0;
- (void)didMoveToSuperview;
- (void)setHidden:(BOOL)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)displayLayer:(id)a0;
- (id)image;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setAlpha:(double)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)displayDidRefresh:(id)a0;

@end
