@class UIControl, NSMutableAttributedString, UIImageView, UILabel, AWESearchEcommerceAnchorModel, YYLabel;

@interface AWESearchLiveSearchGoodsView : UIView

@property (retain, nonatomic) AWESearchEcommerceAnchorModel *model;
@property (retain, nonatomic) UIControl *bgControl;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) YYLabel *infoLabel;
@property (retain, nonatomic) UILabel *currencySymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *extraInfoLabel;
@property (retain, nonatomic) NSMutableAttributedString *pureTitleString;

- (id)formattedPriceWithOriginalPrice:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
