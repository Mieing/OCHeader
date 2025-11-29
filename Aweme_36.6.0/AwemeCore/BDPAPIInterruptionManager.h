@class NSString, NSMapTable, NSRecursiveLock;

@interface BDPAPIInterruptionManager : NSObject <BDPWarmBootMessage, BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSMapTable *interruptionStatus;
@property (retain, nonatomic) NSMapTable *subscribeHandlerPendingTimers;
@property (retain, nonatomic) NSMapTable *APIInvokingPendingQueues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)clearAllPendingAPI:(id)a0;
+ (void)removeSubscribeHandlerInterrupter:(id)a0;
+ (void)addPendingAPI:(id)a0 block:(id /* block */)a1;
+ (BOOL)shouldInterruptAPI:(id)a0 isSynchorous:(BOOL)a1 uniqueID:(id)a2 type:(id)a3;
+ (void)executeAllPendingAPI:(id)a0;
+ (BOOL)shouldInterruptSubscribeHandler:(id)a0;
+ (BOOL)shouldInterruptAPI:(id)a0 isSynchorous:(BOOL)a1 uniqueID:(id)a2;
+ (id)sharedManager;

- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)_obtainInvokeAIAllowList;
- (id)_obtainInteractivePluginInvokeBlockList;
- (id)_obtainInvokeAllowList;
- (void)setIsInterrupted:(BOOL)a0 uniqueID:(id)a1;
- (void)setupSubscribeHandlerInterrupter:(id)a0;
- (void)clearAllPendingAPI:(id)a0;
- (void)clearInterruptionStatus:(id)a0;
- (void)removeSubscribeHandlerInterrupter:(id)a0;
- (void)addPendingAPI:(id)a0 block:(id /* block */)a1;
- (BOOL)shouldInterruptAPI:(id)a0 isSynchorous:(BOOL)a1 uniqueID:(id)a2 type:(id)a3;
- (void)executeAllPendingAPI:(id)a0;
- (BOOL)shouldInterruptSubscribeHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
