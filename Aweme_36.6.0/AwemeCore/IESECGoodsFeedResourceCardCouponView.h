@class UIButton, IESECFeedResourceCardCouponModel, NSTimer, UIImageView, UILabel, UIView, YYLabel;

@interface IESECGoodsFeedResourceCardCouponView : UIView {
    BOOL _isVersion3;
    NSTimer *_timer;
    UIView *_clickView;
    long long _expireTime;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_amountLabel;
    UILabel *_subtitleLabel;
    UILabel *_linkInfoLabel;
    YYLabel *_countdownLabel;
    UILabel *_countdownTipLabel;
    UIButton *_couponButton;
    UIImageView *_leftImageView;
    UIImageView *_backgroundView;
    UIImageView *_linkInfoArrowView;
    IESECFeedResourceCardCouponModel *_model;
}

@property (copy, nonatomic) id /* block */ clickCouponButtonBlock;
@property (nonatomic) BOOL hasCoupon;

- (void)setupUIWithModel:(id)a0;
- (void)setCountDownTimer;
- (void)updateCountdownLabel;
- (void)clickCouponButton:(id)a0;
- (void)setUpCouponViewInVersion3WithModel:(id)a0;
- (void)setUpCouponedViewInVersion3WithModel:(id)a0;
- (void)setUpLeftPartOfCouponViewInVersion3WithModel:(id)a0;
- (void)setUpLinkInfoArrowView;
- (void)updateCountdownLabelInVersion3WithHour:(long long)a0 minute:(long long)a1 second:(long long)a2;
- (void)updateButtonView;
- (void).cxx_destruct;
- (void)dealloc;

@end
