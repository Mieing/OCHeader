@interface TopNHostStrategyBridge : NSObject

@property (nonatomic) struct shared_ptr<livestrategy::IStrategyCenter> { struct IStrategyCenter *__ptr_; struct __shared_weak_count *__cntrl_; } strategyCenterPtr;

+ (id)sharedInstance;

- (void)AddDomainUsedCount:(id)a0;
- (id)RunStrategy;
- (void)ClearRecords;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
