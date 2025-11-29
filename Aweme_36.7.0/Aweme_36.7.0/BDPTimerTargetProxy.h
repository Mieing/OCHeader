@class NSTimer;

@interface BDPTimerTargetProxy : NSObject

@property (weak, nonatomic) id target;
@property (copy, nonatomic) id /* block */ fireBlock;
@property (weak, nonatomic) NSTimer *timer;

+ (id)proxyWithTarget:(id)a0 fireBlock:(id /* block */)a1;

- (void)fireBlockInvoker:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;

@end
