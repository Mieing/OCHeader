@class UIButton, UILabel, UIView, YYLabel;

@interface AWEIMMsgTabPrivateMsgTipBanner : UIView

@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) id /* block */ closeAction;

+ (double)bannerViewHeight;
+ (id)makeAttrString:(id)a0 highlight:(id)a1 tapAction:(id /* block */)a2;

- (void)closeBtnTapped:(id)a0;
- (void)refreshWithTitle:(id)a0 subtitle:(id)a1 closeAction:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
