@class NSString, AWEECOMIMCardRightsView, AWEECOMIMSubCardProductSalesWhiteCard, AWEECOMIMCardComponentOperationPanel;

@interface AWEECOMIMGoodsCardView : AWEECOMIMCardBaseView <AWEECOMIMSubCardProductCardDelegate>

@property (retain, nonatomic) AWEECOMIMSubCardProductSalesWhiteCard *goodsCardView;
@property (retain, nonatomic) AWEECOMIMCardRightsView *rightsView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithWidth:(double)a0 model:(id)a1;
+ (BOOL)isDynamicHeight;

- (void)tapCard;
- (void)subCardProductCardDidTapAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateData;

@end
