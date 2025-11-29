@class NSMapTable, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDPNetworkPriorityManager : NSObject <BDPBootLifeCycleMessage, BDPWarmBootMessage, BDPNetworkPriorityMessage, BDPNetworkPriorityManagerInterface>

@property (retain) NSObject<OS_dispatch_queue> *lowQueue;
@property (retain) NSMapTable *deferMap;
@property (retain) NSMapTable *deferTimerMap;
@property (retain) NSMutableSet *activedAppid;
@property (retain) NSObject<OS_dispatch_semaphore> *sem;
@property long long maxDeferQueueCount;
@property double deferQueueTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)activeDeferTasksWithUniqueID:(id)a0;
- (id)receiveRequest:(id)a0;
- (BOOL)isDeferRequest:(id)a0;
- (void)timeoutWithAppID:(id)a0;
- (long long)execDeferTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
