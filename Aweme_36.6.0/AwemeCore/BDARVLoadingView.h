@class BDARVIndicatorLoading, BDARVProgressLoading, UIView;

@interface BDARVLoadingView : UIView

@property (retain, nonatomic) BDARVIndicatorLoading *indicatorView;
@property (retain, nonatomic) BDARVProgressLoading *progressView;
@property (retain, nonatomic) UIView *fakeView;
@property (nonatomic) unsigned long long loadingStyle;

- (void)hideLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 loadingStyle:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)showLoading;

@end
