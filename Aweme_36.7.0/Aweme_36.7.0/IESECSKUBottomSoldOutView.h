@class NSDateFormatter, NSString, UILabel, UIView, NSObject;
@protocol OS_dispatch_source, IESECSKUBottomSoldOutViewDelegate;

@interface IESECSKUBottomSoldOutView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *soldOutLabel;
@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (nonatomic) double countdownTime;
@property (nonatomic) long long countdownTimeInterval;
@property (nonatomic) long long targetTimeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *countdownTimer;
@property (copy, nonatomic) NSString *countdownMsg;
@property (weak, nonatomic) id<IESECSKUBottomSoldOutViewDelegate> delegate;

- (void)configUI;
- (void)invalidateCountdownTimer;
- (void)updateCountLabel;
- (id)configCountDownTime;
- (id)timeStringWithTime:(long long)a0;
- (void)beginCountdownForTimeInterval:(long long)a0 nextReleaseTime:(long long)a1 countDownTime:(long long)a2 msg:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)countdown;

@end
