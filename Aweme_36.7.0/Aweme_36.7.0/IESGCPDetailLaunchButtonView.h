@class IESGCPDetailLaunchButtonContainerView;

@interface IESGCPDetailLaunchButtonView : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPDetailLaunchButtonContainerView *buttonContainerView;

- (void)bindViewModel:(id)a0;
- (void)observeAndUpdateButtonThemeConfig;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupUI;

@end
