@class NSString, IESLiveNativeAppShelfCellPriceView, IESLiveNativeAppShelfCellCouponDescView, UILabel, IESLiveNativeAppShelfCellCouponLabelStackView;

@interface IESLiveNativeAppShelfCellCouponInfoView : IESLiveNativeAppShelfCellCouponBaseView

@property (copy, nonatomic) NSString *sellingPoint;
@property (retain, nonatomic) UILabel *sellingPointLabel;
@property (retain, nonatomic) IESLiveNativeAppShelfCellCouponDescView *descView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellCouponLabelStackView *couponLabelStackView;
@property (retain, nonatomic) IESLiveNativeAppShelfCellPriceView *priceView;

- (void)setupControl;
- (id)initWithDIContext:(id)a0 trackContext:(id)a1;
- (void)updateByProductInfo:(id)a0 cardExtraInfo:(id)a1;
- (void)updateSellingPoint:(id)a0;
- (id)getProductTraceParams;
- (void)updateByProductInfo:(id)a0 cardExtraInfo:(id)a1 sellingPoint:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
