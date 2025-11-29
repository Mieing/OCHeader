@class NSHashTable;

@interface AWESearchPreRequestLifeCycle : NSObject

@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)invokePreRequestLifeCycleWithState:(unsigned long long)a0 preRequestType:(unsigned long long)a1 preRequestTag:(id)a2;
- (void)addLifeCycleObserver:(id)a0;
- (void)removeLifeCycleObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
