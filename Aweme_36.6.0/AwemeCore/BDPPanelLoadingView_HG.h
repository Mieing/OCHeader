@protocol BDPPanelLoadingViewDelegate_HG;

@interface BDPPanelLoadingView_HG : UIView

@property (weak, nonatomic) id<BDPPanelLoadingViewDelegate_HG> loadingViewDelegate;

- (void)onCloseButtonClicked;
- (void)onGoBackButtonClicked;
- (void)onReloadPageClicked;
- (void)setupLoadingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupErrorViewWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;

@end
