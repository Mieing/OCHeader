@class NSTimer, NSString, NSDictionary;
@protocol IESECBuyNowCountDownDelegate;

@interface IESECBuyNowCountDownView : UILabel

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long styleEnum;
@property (nonatomic) long long countDownEndTime;
@property (copy, nonatomic) NSString *daySuffix;
@property (copy, nonatomic) NSString *hourSuffix;
@property (copy, nonatomic) NSString *mintueSuffix;
@property (copy, nonatomic) NSString *secondSuffix;
@property (nonatomic) BOOL isLaunch;
@property (weak, nonatomic) id<IESECBuyNowCountDownDelegate> delegate;
@property (retain, nonatomic) NSDictionary *config;

- (void)triggerCountDown;
- (void)timerEvent;
- (id)specificTimeWithHour:(int)a0 mintue:(int)a1 second:(int)a2;
- (void)invaliateTimer;
- (void)dealCountDownEndAction;
- (id)specificTimeWithDay:(int)a0 Hour:(int)a1 mintue:(int)a2 second:(int)a3;
- (id)initWithConfig:(id)a0 countDownDelegate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;

@end
