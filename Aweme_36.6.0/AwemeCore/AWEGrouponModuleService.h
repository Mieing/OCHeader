@class NSString;

@interface AWEGrouponModuleService : HTSService <AWEGrouponModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackInjectionWithEventName:(id)a0 context:(id)a1;
- (id)trackPOISessionInjectionWithContext:(id)a0;
- (id)getGrouponMigrateComponentControllerName;
- (id)nearbyFeedCommonTrackParamsWithAweme:(id)a0;
- (id)feedRequestNearbyParams;
- (id)searchRequestNearbyParamsWithReferstring:(id)a0;
- (id)searchRequestNearbyParamsWithReferstring:(id)a0 isForceInGrouponTab:(BOOL)a1;
- (id)searchMidPageCommonParamsWithReferstring:(id)a0;
- (id)searchCommonParamsWithLifeHomepageFreshType:(id)a0;
- (id)c2FeedVideoInteractiveParamsWithModel:(id)a0;
- (void)grouponFeedExitInnerFeedSearchEventWithParams:(id)a0;
- (void)notifySearchHalfScreenContentFMPDone;
- (id)lifeFeedsPrefetch:(id)a0;
- (id)lifeTrackParamsForSearch:(id)a0;
- (id)grouponSearchParams;
- (void)updateHasOpenSubPage:(BOOL)a0;
- (id)aweNearByCommonDataManager;
- (id)nearbyGuideShowManager;
- (id)nearbyLiveCommonTrackParamsWithAweme:(id)a0 sceneType:(unsigned long long)a1;
- (BOOL)lifeTabHasSmallLiveWindowWithPageType:(long long)a0;
- (id)eCommerceNearbyInnerDataControllerWithSource:(long long)a0 awemeIDs:(id)a1 referString:(id)a2;
- (Class)nearbySubPageManager;
- (id)lifeExtraInfoAddHomepageLifeEnterInfo:(long long)a0;
- (void)handleByteSyncMsg:(id)a0;
- (void)removeNearbyDotWithPageType:(long long)a0 removeType:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)removeNearbyDotWithScene:(unsigned long long)a0 pageType:(long long)a1 removeType:(unsigned long long)a2 completion:(id)a3;
- (BOOL)isGrouponViewDidAppear;
- (id)grouponViewController;
- (id)createLifeFeedsViewControllerWithPageScene:(id)a0 sessionId:(id)a1;
- (id)createGrouponContainerViewControllerIfNeeded;
- (void)releaseGrouponContainerViewControllerIfNeeded;
- (id)grouponTabEnterIdDicWithPageType:(long long)a0;
- (id)createGrouponContainer;
- (id)createGrouponSingleContainer;
- (id)getGrouponC2EventBusWithPageType:(long long)a0;
- (id)getGrouponInitManager;
- (id)grouponTabManagerWithPageType:(long long)a0;
- (id)lifeCommonGuideParams;
- (void)registGuideIMPAndTryRecoverStorageTabDot;

@end
