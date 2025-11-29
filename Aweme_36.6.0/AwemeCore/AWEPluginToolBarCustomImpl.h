@class NSString;

@interface AWEPluginToolBarCustomImpl : NSObject <BDPToolBarPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (BOOL)isLiveCustomWithUniqueID:(id)a0;
- (BOOL)isLiteLiveCustomWithUniqueID:(id)a0;
- (void)tryAddRecordButtonInItems:(id)a0 uniqueID:(id)a1;
- (void)bdp_gameCustomMorePanel:(id)a0 uniqueID:(id)a1 items:(id)a2;
- (void)addGameInfoItemUniqueID:(id)a0 items:(id)a1;
- (BOOL)bdp_shouldEnableFullCustom;
- (BOOL)bdp_shouldEnableFullCustomWithUniqueID:(id)a0;
- (BOOL)bdp_shouldShowNormalPanel:(id)a0;
- (id)customMorePanelModelWithUniqueID:(id)a0;
- (void)bdp_customMorePanel:(id)a0 uniqueID:(id)a1 items:(id)a2;
- (void)bdp_customMorePanel:(id)a0 uniqueID:(id)a1 items:(id)a2 extraInfo:(id)a3;

@end
