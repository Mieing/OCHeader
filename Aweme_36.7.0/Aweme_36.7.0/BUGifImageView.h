@class BUGifImage, CADisplayLink;

@interface BUGifImageView : UIImageView <BUAnimationImageView>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) BUGifImage *gifImage;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL repeats;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) BOOL delayDuration;

- (void)displayImage:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)setImage:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)dealloc;
- (void)endAnimation;
- (void)beginAnimation;

@end
