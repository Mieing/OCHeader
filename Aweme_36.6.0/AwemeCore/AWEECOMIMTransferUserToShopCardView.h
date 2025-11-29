@class AWEECOMIMSubCardOrderCard, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMSubCardProductSalesCard, AWEECOMIMCardComponentMultiIconLabelView;

@interface AWEECOMIMTransferUserToShopCardView : AWEECOMIMCardBaseView

@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardProductSalesCard *productCardView;
@property (retain, nonatomic) AWEECOMIMSubCardOrderCard *orderCardView;
@property (retain, nonatomic) AWEECOMIMCardComponentMultiIconLabelView *descView;

+ (double)heightWithWidth:(double)a0 model:(id)a1;
+ (BOOL)isDynamicHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData;

@end
