@class NSMutableArray, BDPCutLossesInfoModel, NSMutableSet, NSObject, NSError;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BDPPromise : NSObject {
    long long _state;
    NSMutableSet *_pendingObjects;
    id _value;
    NSError *_error;
    NSMutableArray *_observers;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (class, retain) NSObject<OS_dispatch_queue> *defaultDispatchQueue;

@property (nonatomic) BOOL loaderReadingJS;
@property (retain, nonatomic) BDPCutLossesInfoModel *cutLossesInfo;
@property (readonly, nonatomic) BOOL isPending;
@property (readonly, nonatomic) BOOL isFulfilled;
@property (readonly, nonatomic) BOOL isRejected;
@property (readonly, nonatomic) NSMutableSet *pendingObjects;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isPending;

+ (id)resolvedWith:(id)a0;
+ (id)onQueue:(id)a0 all:(id)a1;
+ (id)onQueue:(id)a0 async:(id /* block */)a1;
+ (id)async:(id /* block */)a0;
+ (id)all:(id)a0;
+ (id /* block */)resolved;
+ (void)initialize;
+ (id)pendingPromise;
+ (id /* block */)pending;

- (void)observeOnQueue:(id)a0 fulfill:(id /* block */)a1 reject:(id /* block */)a2;
- (id)chainOnQueue:(id)a0 chainedFulfill:(id /* block */)a1 chainedReject:(id /* block */)a2;
- (id)initPending;
- (id)onQueue:(id)a0 catch:(id /* block */)a1;
- (id)onQueue:(id)a0 then:(id /* block */)a1;
- (id)pendingObjects;
- (void).cxx_destruct;
- (id)then:(id /* block */)a0;
- (id)error;
- (id)description;
- (id)value;
- (void)reject:(id)a0;
- (id)catch:(id /* block */)a0;
- (BOOL)isFulfilled;
- (void)dealloc;
- (BOOL)isRejected;
- (void)fulfill:(id)a0;
- (id)initWithResolution:(id)a0;

@end
