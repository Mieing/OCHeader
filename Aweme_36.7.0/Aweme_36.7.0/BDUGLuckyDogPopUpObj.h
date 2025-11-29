@class NSString, NSDictionary, NSTimer;

@interface BDUGLuckyDogPopUpObj : NSObject

@property (copy, nonatomic) NSString *dialogName;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ shouldShowHandler;
@property (copy, nonatomic) id /* block */ showPopUpHandler;
@property (copy, nonatomic) id /* block */ forceHideHandler;
@property (retain, nonatomic) NSTimer *expiredTimer;
@property (nonatomic) BOOL keepAlive;
@property (nonatomic) BOOL isLynxPopObj;
@property (nonatomic) double nextPollingTime;
@property (copy, nonatomic) NSDictionary *bizExtraParms;

- (void)setupExpiredTimer;
- (void)renewalExpiredTimer;
- (BOOL)finishSelfWithType:(unsigned long long)a0;
- (BOOL)removeSelf;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onTimer;

@end
