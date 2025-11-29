@class NSMutableArray;

@interface BDPObjectDeathObserver : NSObject

@property (retain, nonatomic) NSMutableArray *handlers;

+ (void)observeObjectDeath:(id)a0 withHandler:(id /* block */)a1;
+ (id)observerWithObject:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addHandler:(id /* block */)a0;
- (void)dealloc;

@end
