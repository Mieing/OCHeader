@class NSMutableDictionary;

@interface JSWorkerBridgePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *bridgesMap;

+ (void)registerBridge:(id)a0 forContainerID:(id)a1;
+ (void)unregisterBridgeForContainerID:(id)a0;
+ (id)bridgeForContainerID:(id)a0;
+ (id)sharedPool;

- (void).cxx_destruct;

@end
