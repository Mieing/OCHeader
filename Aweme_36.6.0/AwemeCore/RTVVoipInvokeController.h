@class NSMutableArray, NSMutableDictionary, RxMultipleDelegate, NSMutableSet, RTVVoipWebService, RTVVoipMonitor;
@protocol RxInjector, RTVVoipInvokeControllerObserver;

@interface RTVVoipInvokeController : NSObject {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxMultipleDelegate<RTVVoipInvokeControllerObserver> *observers;
@property (retain, nonatomic) NSMutableSet *operations;
@property (retain, nonatomic) NSMutableDictionary *operationsMapper;
@property (readonly, nonatomic) RTVVoipWebService *voipWebService;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (retain, nonatomic) NSMutableArray *canceledRequestsIdentifies;
@property (retain, nonatomic) NSMutableArray *canceledRequestsRoomIDs;

- (void)rxAwakeFromPropertyInjection;
- (id)invokeOperationWithVoip:(id)a0;
- (BOOL)isRequestingCanceledVoIPWithRoomID:(id)a0;
- (id)currentOperations;
- (void)__addInvokeOperation:(id)a0;
- (void)__updateInvokeOpration:(id)a0;
- (id)__operationWithVoip:(id)a0;
- (void)__cancelRequestingVoIP:(id)a0;
- (void)beginInvokeOperation:(id)a0;
- (void)endInvokeOperation:(id)a0 error:(id)a1;
- (void)finishInvokeOperationWithVoip:(id)a0;
- (void)markCancelRequestingVoIP:(id)a0;
- (void)requestDidFinished:(id)a0 nextVoip:(id)a1;
- (BOOL)isRequestingCanceledVoIP:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id).cxx_construct;
- (void)removeObserver:(id)a0;

@end
