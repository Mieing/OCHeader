@class YYLabel, NSTimer, IESECGoodsDetailCouponUrgeInfo;

@interface IESECGoodsInternalFeedCouponBannerView : UIView

@property (nonatomic) long long couponExpireTime;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) YYLabel *couponPromptCountdownLabel;
@property (retain, nonatomic) NSTimer *couponCountdownTimer;
@property (retain, nonatomic) IESECGoodsDetailCouponUrgeInfo *couponUrgeInfo;

- (void)invalidateCouponCountDownTimer;
- (void)setupWithIsTop:(BOOL)a0 couponUrgeInfo:(id)a1;
- (id)setupCouponPromptCountdownLabel;
- (void)tapCloseImageGesture;
- (void)setupCouponCountdownTimer;
- (id)getCountdownText;
- (void)updateCouponPromptCountdownLabel;
- (id)initWithIsTop:(BOOL)a0 couponUrgeInfo:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
