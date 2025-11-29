@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BDPSubscribeManager_HG : NSObject <BDPContainerLifeCycleMessage> {
    NSMutableDictionary *_subscribeInstanceDict;
}

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)a0;
- (id)getSubscribeInstanceForUniqueID:(id)a0;
- (void)addSubscribeInstance:(id)a0 forUniqueID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
