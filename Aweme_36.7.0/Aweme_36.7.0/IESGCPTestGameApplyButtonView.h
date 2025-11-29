@class IESGCPTestGameApplyButtonContainerView;

@interface IESGCPTestGameApplyButtonView : IESGCPDetailBaseView

@property (retain, nonatomic) IESGCPTestGameApplyButtonContainerView *buttonContainerView;

- (void)bindViewModel:(id)a0;
- (void)observeAndUpdateButtonThemeConfig;
- (void)updateButtonWithState:(unsigned long long)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setupViews;
- (void)addObservers;

@end
