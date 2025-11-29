@class UIImageView, UILabel, UIButton;

@interface AWEIronManLandingPageCouponItem : AWEIronManLandingPageRecentBaseItem

@property (retain, nonatomic) UIImageView *leftBgView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *conditionLabel;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UIImageView *rightBgView;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) UILabel *infoTitleLabel;
@property (retain, nonatomic) UILabel *descTitleLabel;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateToItemModel:(id)a0;
- (void)transferCouponInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
