@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIronManLandingPageRecentActionItem : AWEIronManLandingPageRecentBaseItem

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *trdTitleLabel;
@property (retain, nonatomic) UIButton *actionBtn;
@property (retain, nonatomic) UIView *priceView;
@property (retain, nonatomic) UILabel *currentPriceLabel;
@property (retain, nonatomic) UILabel *previousPriceLabel;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateToItemModel:(id)a0;
- (void)previousPriceAttrStrBuild;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
