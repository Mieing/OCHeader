@class NSObject, NSString, NSDictionary, NSMutableDictionary, IESLLTempoContextStore, IESLLTempoVMRuntimeInstance, NSMutableArray;
@protocol IESLLTempoVmRuntimeEventCenter, OS_dispatch_semaphore, IESLLTempoVmRuntimeEventReceiver;

@interface IESLLTempoVmRuntimeEventModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) id<IESLLTempoVmRuntimeEventCenter> eventCenter;
@property (weak, nonatomic) IESLLTempoVMRuntimeInstance *vmRuntime;
@property (retain, nonatomic) id<IESLLTempoVmRuntimeEventReceiver> vmEventReceiver;
@property (retain, nonatomic) NSMutableArray *eventList;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (weak, nonatomic) IESLLTempoContextStore *tempoContextStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)subscribeEventMethod:(id)a0;
- (void)unsubscribeEventMethod:(id)a0;
- (void)publishEvent:(id)a0 params:(id)a1 isBroadcast:(BOOL)a2;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (void)registerEventListener:(id)a0;
- (void)unregisterEventListener:(id)a0;

@end
