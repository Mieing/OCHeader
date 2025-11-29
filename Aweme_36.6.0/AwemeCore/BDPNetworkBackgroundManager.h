@class NSString, BDPThreadSafeDictionary;

@interface BDPNetworkBackgroundManager : NSObject <BDPContainerLifeCycleMessage, BDPWarmBootMessage>

@property (retain, nonatomic) BDPThreadSafeDictionary *backgroundData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)applicationEnterWithUniqueID:(id)a0;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)viewDidDisappear:(id)a0 uniqueID:(id)a1;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (long long)useLifeCycleType:(id)a0;
- (BOOL)canRequestForUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
