@class NSString;

@interface AWEPluginAnchorCustomImpl : NSObject <BDPAnchorPluginDelegate, AWEPublishTaskMessage, BDPBootLifeCycleMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (void)checkNeedSecurityMoneyCheckWithUniqueID:(id)a0;
- (void)showVideoSceneGuideWithUniqueID:(id)a0 controller:(id)a1 data:(id)a2;
- (void)showLiveSceneGuideWithUniqueID:(id)a0 controller:(id)a1 data:(id)a2;
- (void)fetchODRGuideDataWithODRSource:(unsigned long long)a0 appID:(id)a1 completion:(id /* block */)a2;
- (id)mountedDataWithAnchorData:(id)a0;
- (id)anchorActionFromAnchorType:(long long)a0;
- (id)appIDFromContent:(id)a0;
- (void)trackAnchorResult:(id)a0 appID:(id)a1;
- (void)requestAwemeWithItemID:(id)a0 completion:(id /* block */)a1;
- (void)bdp_anchorButtonDidClick:(id)a0 snapshot:(id)a1 completion:(id /* block */)a2;
- (id)mountedDataWithUniqueID:(id)a0;
- (void)bdp_getProductInfoWithAnchorData:(id)a0 timeout:(id)a1 completion:(id /* block */)a2;
- (id)bdp_nativeGameAnchorConfigWithSchema:(id)a0;
- (id)init;

@end
