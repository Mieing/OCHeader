@class NSMutableArray;

@interface IESECDeallocObserver : NSObject

@property (retain, nonatomic) NSMutableArray *observers;

+ (void)removeDeallocObserver:(id)a0 target:(id)a1;
+ (id)addDeallocObserver:(id /* block */)a0 target:(id)a1;
+ (id)deallocObserverForTarget:(id)a0;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
