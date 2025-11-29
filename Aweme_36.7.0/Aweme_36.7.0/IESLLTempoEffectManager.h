@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLLTempoEffectManager : NSObject

@property (retain, nonatomic) NSMutableArray *effectQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

- (void)loadData:(id)a0 globalProps:(id)a1;
- (void)preloadData:(id)a0 globalProps:(id)a1;
- (void)addEffectQueue:(id)a0;
- (id)__popEffectMap;
- (void)updateData:(id)a0 globalProps:(id)a1 componentID:(id)a2;
- (id)popEffectMap;
- (void).cxx_destruct;
- (id)init;

@end
