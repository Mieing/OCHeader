@class UIColor, IESECGCDTimer, IESECLiveConfigCountDownModel;
@protocol IESECLiveConfigViewDelegate;

@interface IESECLiveCountDownLabel : UILabel

@property (retain, nonatomic) UIColor *countDownColor;
@property (retain, nonatomic) IESECGCDTimer *countDownTimer;
@property (retain, nonatomic) IESECLiveConfigCountDownModel *countDownModel;
@property (weak, nonatomic) id<IESECLiveConfigViewDelegate> delegate;

- (void)checkValidIfNeeded;
- (void)reloadCountDown;
- (void)setupCountDownTimer;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)dealloc;
- (id)initWithTextColor:(id)a0;

@end
