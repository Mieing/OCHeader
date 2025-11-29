@class NSString, NSMutableDictionary;

@interface BDPDynamicPluginLoadInstanceFactory : NSObject <BDPIndustrySDKMessage, BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSMutableDictionary *preloadPluginInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)industrySDKDidUpdated:(id)a0 preloadId:(id)a1;
- (void)releaseDynamicInstanceWithUniqueID:(id)a0;
- (BOOL)disableRemovePluginLoadInstanceCache;
- (id)getDynamicInstanceWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
