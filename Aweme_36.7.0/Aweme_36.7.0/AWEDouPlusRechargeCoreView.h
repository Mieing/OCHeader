@class UIView, NSString, NSArray, AWEDouPlusCouponModel, AWEDouplusRerchageConfirmView, AWEDouPlusChargeOptionsResponseModel, AWEDouPlusRechargeCouponStatusView, AWEDouPlusRechargeToalBalanceView, UILabel;
@protocol AWEDouPlusRechargeCoreViewDelegate;

@interface AWEDouPlusRechargeCoreView : UIView

@property (retain, nonatomic) AWEDouPlusRechargeToalBalanceView *toalBalanceView;
@property (retain, nonatomic) UILabel *chooseAmountLabel;
@property (retain, nonatomic) UIView *divideLineView;
@property (retain, nonatomic) AWEDouPlusRechargeCouponStatusView *couponStatusView;
@property (retain, nonatomic) AWEDouplusRerchageConfirmView *confirmView;
@property (copy, nonatomic) NSArray *productViewList;
@property (weak, nonatomic) id<AWEDouPlusRechargeCoreViewDelegate> delegate;
@property (retain, nonatomic) AWEDouPlusChargeOptionsResponseModel *chargeOptionsModel;
@property (copy, nonatomic) NSArray *productModelList;
@property (copy, nonatomic) NSArray *couponModelList;
@property (retain, nonatomic) AWEDouPlusCouponModel *selectedCouponModel;
@property (copy, nonatomic) NSString *couponStatusDesc;

- (void)setupGestureRecognizer;
- (void)setupProductViewList;
- (void)updateSelectedProductModel:(id)a0;
- (void)onTapCouponStatusViewAction;
- (id)selectedIAPRProductView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
