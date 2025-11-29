@class AWELiveAcqCastVideoFloatingBackgroundView, AWELiveAcqCastVideoSearchPanel, UIView;

@interface AWELiveAcqCastVideoCurrentUserPanel : AWELiveAcqCastVideoUserPanel

@property (retain, nonatomic) AWELiveAcqCastVideoFloatingBackgroundView *floatingBackgroundView;
@property (retain, nonatomic) AWELiveAcqCastVideoSearchPanel *searchPanel;
@property (retain, nonatomic) UIView *searchIndicatorView;
@property (retain, nonatomic) UIView *searchView;

- (void)updatePanelHeight;
- (void)showSearchPanel;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
