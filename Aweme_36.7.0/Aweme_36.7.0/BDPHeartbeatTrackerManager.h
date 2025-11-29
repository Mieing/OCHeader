@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPHeartbeatTrackerManager : NSObject <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *mapDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)executeBlkInQueue:(id /* block */)a0;
- (void)registerHeartbeatWithAppId:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
