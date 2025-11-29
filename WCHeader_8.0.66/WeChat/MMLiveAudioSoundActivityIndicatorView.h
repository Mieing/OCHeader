@class MMLiveAudioSoundActivityIndicatorAnimationView, UIView;

@interface MMLiveAudioSoundActivityIndicatorView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLiveAudioSoundActivityIndicatorAnimationView *indicatorViewA;
@property (retain, nonatomic) MMLiveAudioSoundActivityIndicatorAnimationView *indicatorViewB;
@property (retain, nonatomic) MMLiveAudioSoundActivityIndicatorAnimationView *indicatorViewC;
@property (nonatomic) BOOL isStub;
@property (nonatomic) BOOL soundActive;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isStub:(BOOL)a1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (struct CGPath { } *)indicatorShapeMaskPathWithDimension:(double)a0 innerRadius:(double)a1 outerRadius:(double)a2;
- (void)startIndicatorAnimation;
- (void)stopIndicatorAnimation;
- (void)startIndicatorAnimationOnIndicatorView:(id)a0 duration:(double)a1 delay:(double)a2;
- (void)updateSoundActive:(BOOL)a0;
- (void).cxx_destruct;

@end
