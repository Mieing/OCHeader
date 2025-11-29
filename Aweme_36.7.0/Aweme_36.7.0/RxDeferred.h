@class NSString, RxPromise;

@interface RxDeferred : NSObject <AWEAdPromiseUpdateStatus, RxCancellable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ cancelledBlock;
@property (nonatomic) BOOL cancelled;
@property (readonly, nonatomic) RxPromise *promise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deferWithScheduler:(id)a0;
+ (id)defer;

- (void)whenCancelled:(id /* block */)a0;
- (void)resolveWithValue:(id)a0 scheduler:(id)a1;
- (void)rejectWithError:(id)a0 scheduler:(id)a1;
- (void)reject;
- (void)resolveWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithScheduler:(id)a0;
- (id)init;
- (void)rejectWithError:(id)a0;
- (void)resolve;
- (void)cancel;
- (void)fullfillWithValue:(id)a0;

@end
