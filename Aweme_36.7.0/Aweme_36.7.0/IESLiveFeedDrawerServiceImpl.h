@class NSString;

@interface IESLiveFeedDrawerServiceImpl : NSObject <IESLiveFeedDrawerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)multiTabConfig;
- (id)feedDrawer;
- (void)updateTrackContext:(id)a0 viewController:(id)a1;
- (BOOL)containsEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)enableMultiTabWithContext:(id)a0;
- (id)feedDrawerConfigForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)nearbyTVDrawerTitle;
- (id)nearbyTVDrawerInnerUrl;
- (BOOL)isEnableNearbyTVDrawer;
- (id)multiTabModelForContext:(id)a0;
- (BOOL)shouldShowSearchEntrance;
- (id)singleTabModelForContext:(id)a0;
- (id)lynxTabModelForContext:(id)a0;
- (BOOL)enableShowFeedDrawerForEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)enableShowMultiFeedDrawerForContext:(id)a0;
- (BOOL)enableShowMultiFeedDrawerForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)feedDrawerSourceKeyForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)vsTabModelForContext:(id)a0;
- (BOOL)recommandNeedReplaceForEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)isFromFollowTab:(id)a0;
- (id)tabConfigFromNearbyTVEnterFrom:(id)a0 enterMethod:(id)a1 nearbyCityCode:(id)a2;
- (long long)defaultTabTypeFor:(id)a0 context:(id)a1;
- (BOOL)feedDrawEnableMultiTabForEnterFrom:(id)a0 enterMethod:(id)a1;
- (void)p_updateForTabItem:(id)a0 withEnterFrom:(id)a1 enterMethod:(id)a2;
- (id)tabConfigForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)p_feedDrawerMatchForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)p_recommendTabNeedReplaceForEnterFrom:(id)a0 enterMethod:(id)a1;
- (id)p_enableFeedDrawerConfig;
- (unsigned long long)p_evaluateForEnterFrom:(id)a0 enterMethod:(id)a1 sourceKey:(id)a2;
- (id)p_needReplaceRecommandConfig;
- (id)feedDrawerConfigs;
- (id)nearbyTVDrawerConfig;
- (id)getUrlWithOrigin:(id)a0 cityCode:(id)a1;

@end
