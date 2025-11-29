@class NSTimer, NSMutableArray, NSString;

@interface BDUGLuckyTimingTimer : NSObject <BDUGLuckyTimingTimerProtocol>

@property (retain, nonatomic) NSMutableArray *timerTriggerListeners;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double callbackInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)__dismissTaskTimer;
- (void)__setupTaskTimer;
- (void)__countTime;
- (void)registerTimerTriggerListener:(id)a0;
- (void)unregisterTimerTriggerListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
