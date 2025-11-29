@class NSTimer, NSMutableDictionary;

@interface BDPCDDynamicCardCountDownUtil : NSObject

@property (retain, nonatomic) NSTimer *countDownTimer;
@property (retain, nonatomic) NSMutableDictionary *elementDict;
@property (retain, nonatomic) NSMutableDictionary *elementCountDownEndDict;

+ (long long)countDownDiff:(id)a0;
+ (id)countDownText:(id)a0;
+ (id)sharedInstance;

- (void)timerInvalidate;
- (void)onCountDown;
- (void)addCountDownWithCardID:(id)a0 element:(id)a1;
- (void)removeCountDownWithCardID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
