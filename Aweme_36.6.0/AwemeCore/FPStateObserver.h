@class NSMutableSet;

@interface FPStateObserver : NSObject

@property (nonatomic) unsigned long long skipTimes;
@property (nonatomic) BOOL shouldDeliverOnMainThread;
@property (nonatomic) BOOL shouldDistinctUntilChanged;
@property (retain, nonatomic) NSMutableSet *handlers;
@property (retain, nonatomic) id currentValue;

+ (id)merge:(id)a0;
+ (id)combineLatest:(id)a0;

- (id)deliverOnMainThread;
- (id)skipFirst;
- (void)deliverHandler:(id /* block */)a0;
- (void)commitNewValue:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (void)removeHandler:(id /* block */)a0;
- (void)addHandler:(id /* block */)a0;
- (id)initWithValue:(id)a0;
- (id)distinctUntilChanged;
- (id)skip:(unsigned long long)a0;

@end
