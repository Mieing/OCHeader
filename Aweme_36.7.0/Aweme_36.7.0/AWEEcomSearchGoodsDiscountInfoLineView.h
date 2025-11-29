@class AWEEcommerceSearchIconTextView, UILabel, AWESearchMerchandiseModel;

@interface AWEEcomSearchGoodsDiscountInfoLineView : UIView

@property (retain, nonatomic) AWEEcommerceSearchIconTextView *tagView;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) AWESearchMerchandiseModel *merchandise;

+ (BOOL)isShowDiscountInfoLine:(id)a0;

- (void)configWithMerchandise:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
