@class IESLiveNativeAppShelfCellCouponContext;

@interface IESLiveNativeAppShelfCellCouponBaseView : UIView

@property (nonatomic) BOOL isHasSetupUI;
@property (retain, nonatomic) IESLiveNativeAppShelfCellCouponContext *couponContext;

- (id)initWithDIContext:(id)a0 trackContext:(id)a1;
- (void)updateByCouponContext:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;

@end
