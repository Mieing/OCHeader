@class UIStackView, UIImageView, NSTimer, UILabel;

@interface IESECGoodsDetailSaveMoneyTipComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (nonatomic) BOOL isFirstCard;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)openSaveCardCenter;
- (void)setCountDownTimer;
- (void)updateCountdownLabel;
- (void)setupLabelStackView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
