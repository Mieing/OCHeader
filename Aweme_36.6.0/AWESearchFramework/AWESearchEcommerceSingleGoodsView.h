@class UIImageView, UILabel, AWESearchEcommerceAnchorModel, YYLabel;

@interface AWESearchEcommerceSingleGoodsView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *ecommerceImageView;
@property (retain, nonatomic) UILabel *ecommmercePriceLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (readonly, nonatomic) AWESearchEcommerceAnchorModel *ecommerceModel;
@property (copy, nonatomic) id /* block */ clickCallBack;
@property (nonatomic) BOOL showDesc;
@property (nonatomic) BOOL showBorder;
@property (retain, nonatomic) YYLabel *ecommerceTitleLabel;

- (void)setupSubViews;
- (void)reloadEcommerceModel:(id)a0;
- (id)formattedPriceWithData:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
