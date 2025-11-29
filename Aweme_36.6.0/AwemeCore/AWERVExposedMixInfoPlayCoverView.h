@class UILabel, AWERelatedVideoPlayingAnimationView, UIView;

@interface AWERVExposedMixInfoPlayCoverView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;

- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
