@class RxScheduler, NSString, RTVVoipManager;
@protocol RxInjector, RTVXRSettingsInterface;

@interface RTVPacemaker : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipManager *voIPManager;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) id<RTVXRSettingsInterface> xrSettings;
@property (readonly, copy, nonatomic) NSString *callID;
@property (readonly, nonatomic) BOOL stopKeepAlive;
@property (nonatomic) BOOL isKeepAliving;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic) double lastKeepAliveTime;
@property (nonatomic) double keepAliveDelay;

+ (id)pacemakerWithCallID:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (double)__now;
- (void)__keepAliveWithDelay:(double)a0;
- (void)__logValue:(id)a0;
- (double)__newIntervalWithValue:(id)a0;
- (void)__logError:(id)a0;
- (id)__sendKeepAlive;
- (void)__pollingKeepAliveWithDelay:(double)a0;
- (void)__withoutPollingKeepAliveDelay:(double)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithCallID:(id)a0;

@end
