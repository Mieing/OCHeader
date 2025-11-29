@class CJPayLoginLogoStyleDetailView, UIImageView, CJPayLoginBillStatusView, UILabel, UIView, CJPayLoginMarketingStyleDetailView;

@interface CJPayLoginBillView : UIView

@property (retain, nonatomic) UIImageView *headerView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *whiteContentView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CJPayLoginBillStatusView *statusView;
@property (retain, nonatomic) CJPayLoginMarketingStyleDetailView *marketingView;
@property (retain, nonatomic) CJPayLoginLogoStyleDetailView *logoView;
@property (nonatomic) double contentHeight;

- (void)showStatus:(long long)a0 msg:(id)a1;
- (void)p_showLogoView:(id)a0;
- (void)p_showMarketingView:(id)a0;
- (void)updateHeaderLabel:(id)a0;
- (void)updateLoginBillViewWithResponse:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
