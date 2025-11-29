@class NSDictionary, NSTimer;

@interface ACCThrottle : NSObject

@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL isIdle;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL needExecuteWhenTimerInvoke;
@property (copy, nonatomic) id /* block */ executor;
@property (nonatomic) double timeInterval;

+ (id)throttleWithTimeInterval:(double)a0 executor:(id /* block */)a1;

- (void)p_invalidateTimer;
- (void)tryExecuteWithUserInfo:(id)a0;
- (void)p_reschedule;
- (void)p_resetToIdel;
- (void)p_onTimerHandler;
- (void)cancelExecute;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
