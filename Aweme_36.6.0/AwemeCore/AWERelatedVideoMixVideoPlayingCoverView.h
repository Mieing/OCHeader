@class UILabel, LOTAnimationView, UIView;

@interface AWERelatedVideoMixVideoPlayingCoverView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) LOTAnimationView *playAnimationView;
@property (retain, nonatomic) UIView *containerView;

- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
