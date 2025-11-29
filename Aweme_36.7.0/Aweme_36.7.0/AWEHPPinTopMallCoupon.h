@class CAGradientLayer, NSString, UIImageView, UILabel, UIView, AWEHPPinTopUIMallCouponModel;

@interface AWEHPPinTopMallCoupon : UIView <AWEHPPinTopUILifeCycleProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *containerBGView;
@property (retain, nonatomic) UILabel *couponAmountLabel;
@property (retain, nonatomic) UIView *couponSubContainer;
@property (retain, nonatomic) UILabel *couponTitleLabel;
@property (retain, nonatomic) UILabel *couponDescLabel;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) AWEHPPinTopUIMallCouponModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pinTopComponentDidShow;
- (void)pinTopComponentDidDismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (double)viewWidth;

@end
