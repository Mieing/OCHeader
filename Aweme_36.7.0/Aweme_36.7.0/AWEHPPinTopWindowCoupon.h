@class BDImageView, NSString, UIImageView, UIView, UILabel, AWEHPPinTopCouponUIModel;

@interface AWEHPPinTopWindowCoupon : UIView <AWEHPPinTopUILifeCycleProtocol>

@property (retain, nonatomic) AWEHPPinTopCouponUIModel *configModel;
@property (retain, nonatomic) BDImageView *animationImageView;
@property (retain, nonatomic) UIView *couponView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *amountView;
@property (retain, nonatomic) UIImageView *amountIcon;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UIView *couponConditionView;
@property (retain, nonatomic) UILabel *couponTextLabel;
@property (retain, nonatomic) UILabel *couponConditionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pinTopComponentDidShow;
- (void)pinTopComponentDidDismiss;
- (void)setupCouponViewUI;
- (double)getAmountFont;
- (long long)getAmountViewTopOffset;
- (id)transformNumberToString:(long long)a0;
- (long long)getAmountViewHeight;
- (long long)getCenterPanerIconMarginWithValue:(long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (double)viewWidth;

@end
