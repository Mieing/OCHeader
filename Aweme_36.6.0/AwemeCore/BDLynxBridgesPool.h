@class NSEnumerator, LynxThreadSafeDictionary;

@interface BDLynxBridgesPool : NSObject

@property (class, nonatomic) BOOL shouldTriggerCleaning;
@property (class, nonatomic) double cleaningLatency;
@property (class, readonly, nonatomic) NSEnumerator *bridgesEnumerator;

@property (retain) LynxThreadSafeDictionary *bridgesMap;

+ (id)bridgeForContainerID:(id)a0;
+ (void)setBridge:(id)a0 forContainerID:(id)a1;
+ (void)_doCleaning;
+ (void)triggerCleaning;
+ (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
+ (id)sharedPool;

- (void).cxx_destruct;

@end
