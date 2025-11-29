@class UIImageView, UILabel, UIView, AWESearchMerchandiseShopInfo;

@interface AWESearchGoodsComparePriceView : UIView

@property (retain, nonatomic) AWESearchMerchandiseShopInfo *comparePriceInfo;
@property (retain, nonatomic) UIView *bg;
@property (retain, nonatomic) UILabel *comparePriceName;
@property (retain, nonatomic) UILabel *lowestPriceLabel;
@property (retain, nonatomic) UILabel *guideWord;
@property (retain, nonatomic) UIImageView *comparePriceIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;

+ (double)comparePriceHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
