@class UIImageView, AWEEcommerceSearchStyleLabel, AWESearchMerchandisePriceDiscountInfo;

@interface AWEEcommerceSearchIconTextView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWEEcommerceSearchStyleLabel *textLabel;
@property (retain, nonatomic) AWESearchMerchandisePriceDiscountInfo *model;
@property (nonatomic) double spaceBtwIconAndText;

- (void)configWithTagModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
