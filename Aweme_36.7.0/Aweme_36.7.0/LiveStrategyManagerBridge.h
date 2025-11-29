@interface LiveStrategyManagerBridge : NSObject

@property (nonatomic) struct shared_ptr<livestrategy::IVeStrategyManager> { struct IVeStrategyManager *__ptr_; struct __shared_weak_count *__cntrl_; } strategyManager;

+ (id)executeCommand:(long long)a0 command:(long long)a1 hashCode:(long long)a2 info:(id)a3;
+ (id)executeCommandOpt:(long long)a0 command:(long long)a1 hashCode:(long long)a2 info:(id)a3;
+ (void)setAppInfoBundle:(id /* block */)a0 withReqInfoBundle:(id)a1 eventCallback:(id /* block */)a2;
+ (id)queryLatestPlayerDeviceInfo:(long long)a0;
+ (void)start:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
