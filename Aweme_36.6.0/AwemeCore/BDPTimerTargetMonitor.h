@interface BDPTimerTargetMonitor : NSObject

@property (copy, nonatomic) id /* block */ deallocBlock;

+ (void)addMonitorToTarget:(id)a0 forKey:(id)a1 withDeallocBlock:(id /* block */)a2;
+ (void)removeMonitorFromTarget:(id)a0 ofKey:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;

@end
