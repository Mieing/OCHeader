@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BDPBootBusinessManager : NSObject <BDPContainerLifeCycleMessage, BDPBootLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *bootBusinessDict;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)addBootBusinss:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
