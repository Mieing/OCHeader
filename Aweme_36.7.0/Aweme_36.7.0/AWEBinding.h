@class NSThread, NSString, NSMutableArray, AWEBindingKVO;

@interface AWEBinding : NSObject

@property (weak) NSThread *hostThread;
@property (retain) NSMutableArray *handlerBlockArray;
@property (retain) AWEBindingKVO *bindingKVO;
@property (weak) id receiver;
@property (retain) NSString *receiverKeyPath;
@property (retain) NSMutableArray *handlerBlockArray;
@property BOOL boundFlag;
@property BOOL distinctUntilChangedFlag;
@property BOOL deliverOnMainThreadFlag;
@property long long skipCounter;
@property (weak) NSThread *hostThread;
@property (copy) id /* block */ addKVOHandler;

+ (id)merge:(id)a0;
+ (id)combineLatest:(id)a0;

- (id)deliverOnMainThread;
- (id)bindReusableView:(id)a0;
- (void)deliverWithValue:(id)a0;
- (id)disposeBy:(id)a0;
- (void)addHandler:(id /* block */)a0 deylayAddToKVO:(BOOL)a1;
- (void)addToKVO;
- (void)deliverToObject:(id)a0 withValue:(id)a1;
- (void)_deliverToObject:(id)a0 withValue:(id)a1;
- (void)_deliverWithParams:(id)a0;
- (id)receive:(id)a0 keyPath:(id)a1;
- (void)removeFromKVOByObject:(id)a0;
- (void)removeFromKVO;
- (id)deliverOnMainThread_IMAB;
- (id)acc_takeUntil:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeHandler:(id /* block */)a0;
- (void)unbind;
- (void)addHandler:(id /* block */)a0;
- (id)debugDescription;
- (id)distinctUntilChanged;
- (id)skip:(long long)a0;
- (void)deliver;
- (id)observe:(id)a0 keyPath:(id)a1;

@end
