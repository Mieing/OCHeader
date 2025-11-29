@class UIImage, NSArray, NSString;

@interface BDASImageView : BDASControl <CAAnimationDelegate>

@property (nonatomic) unsigned long long animationSource;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (copy, nonatomic) NSArray *animationImages;
@property (copy, nonatomic) NSArray *highlightedAnimationImages;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationRepeatCount;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)drawParametersForAsyncLayer:(id)a0;
- (void)startAnimatingWithImages:(id)a0 duration:(double)a1 repeatCount:(unsigned long long)a2 animationSource:(unsigned long long)a3;
- (BOOL)hasValidContents;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withParameters:(id)a1 isCancelled:(id /* block */)a2;
- (void)stopAnimating;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)isPlaying;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)currentImage;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_startAnimating;

@end
