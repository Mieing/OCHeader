@class UILabel, AWERelatedVideoPlayingAnimationView, UIView;

@interface AWERVHotVideoPlayCoverView : UIView

@property (retain, nonatomic) UIView *hollowView;
@property (retain, nonatomic) UIView *playContainerView;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;

- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
