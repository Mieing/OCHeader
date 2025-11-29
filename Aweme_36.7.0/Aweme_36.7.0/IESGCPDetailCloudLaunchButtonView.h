@class IESGCPDetailCloudLaunchPlayButtonView, IESGCPDetailLaunchButtonContainerView;

@interface IESGCPDetailCloudLaunchButtonView : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailLaunchButtonContainerView *buttonContainerView;
@property (retain, nonatomic) IESGCPDetailCloudLaunchPlayButtonView *teamPlayButtonView;
@property (nonatomic) BOOL hasShownAnimation;

- (void)bindViewModel:(id)a0;
- (void)showButtonAnimation;
- (void)updateCurrentButtonThemeConfigByGradientThemeChange:(BOOL)a0;
- (id)findAnimateParentViewfrom:(id)a0 depth:(long long)a1;
- (id)_buttonTrackParams;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupViews;

@end
