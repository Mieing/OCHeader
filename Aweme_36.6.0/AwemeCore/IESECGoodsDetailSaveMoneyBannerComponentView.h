@class UIStackView, UIImageView, NSTimer, YYLabel;

@interface IESECGoodsDetailSaveMoneyBannerComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIStackView *leftStackView;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) YYLabel *countdownLabel;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL isFirstCard;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)openSaveCardCenter;
- (id)getElementWithModel:(id)a0;
- (void)setCountDownTimer;
- (void)updateCountdownLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)setupStackView;

@end
