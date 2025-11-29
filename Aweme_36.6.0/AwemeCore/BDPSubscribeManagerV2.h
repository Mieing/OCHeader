@class NSString, BDPThreadSafeDictionary;

@interface BDPSubscribeManagerV2 : NSObject <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) BDPThreadSafeDictionary *subscribeInstanceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)a0;
- (id)getSubscribeInstanceForUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
