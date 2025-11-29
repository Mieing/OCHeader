@class NSString;

@interface AWEDouPlusService : HTSService <AWEDouPlusService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowDouPlusEntrance;
+ (id)douPlusEntryTitleWithType:(long long)a0;
+ (BOOL)isLimitSelfLiveDouPlus;
+ (void)openLiveDouPlusWithUrlString:(id)a0;
+ (void)openLiveDouPlusWithUrlString:(id)a0 isMonitorLiveShow:(BOOL)a1 completion:(id /* block */)a2 stackVCAdjust:(id /* block */)a3;
+ (void)openLiveDouPlusWithUrlString:(id)a0 completion:(id /* block */)a1;
+ (void)openLiveDouPlusWithUrlString:(id)a0 completion:(id /* block */)a1 closeCompletion:(id /* block */)a2;
+ (void)openLiveDouPlusWithUrlString:(id)a0 isMonitorLiveShow:(BOOL)a1 completion:(id /* block */)a2;
+ (void)closeTopDouPlusWebVCsAnimated:(BOOL)a0 completion:(id /* block */)a1;
+ (BOOL)shouldShowAdsEntryInSlidePanel;
+ (void)fetchAdsEntranceWithItemID:(id)a0 enterFrom:(id)a1 completeBlock:(id /* block */)a2;
+ (BOOL)isLimitDouPlusEntryGuideAnimation;
+ (BOOL)shouldDouPlusIconMoveForward;
+ (long long)douPlusGuideTypeInteractionScene;
+ (BOOL)shouldShowDouPlusToastInInteractionScene;
+ (BOOL)shouldShowDouPlusIconReverseInInteractionScene;
+ (BOOL)shouldShowDouPlusNewIconBreathInInteractionScene;
+ (long long)douPlusIconLogoUpgradeWithType;
+ (BOOL)shouldUseNewDouPlusToastAPI;
+ (BOOL)shouldUseNewDouPlusIconAPI;
+ (id)douPlusOperaterIconInScene:(id)a0 shouldAdaptTheme:(BOOL)a1;
+ (id)getDouPlusEntryGuideShouleReverseQueryString:(long long)a0;
+ (id)fetchDOUPlusToastModelWithParams:(id)a0 completionBlock:(id /* block */)a1;
+ (id)fetchDouPlusUniqueEntranceWithParams:(id)a0 completionBlock:(id /* block */)a1;
+ (id)douPlusXiaoDianImageViewWithEntranceType:(long long)a0;
+ (id)douPlusXiaoDianImageViewWithEntranceType:(long long)a0 shareItemStyle:(unsigned long long)a1;
+ (id)douPlusXiaoDianEntryURLPathForLive;
+ (long long)douPlusCommonToastRequestThreshold;
+ (id)douPlusXiaoDianTitle;
+ (BOOL)shouldShowDouECPInSharePanel:(id)a0;
+ (BOOL)shouldShowDouplusIconReverseInFeedScene;
+ (id)getEncodeParamsStringWithDict:(id)a0;
+ (id)getDouPlusShowClickTrackParams:(long long)a0 model:(id)a1 referer:(id)a2 servingType:(id)a3;
+ (id)getDouPlusShowClickTrackParams:(long long)a0 model:(id)a1 referer:(id)a2 servingType:(id)a3 shouldAddClickTime:(BOOL)a4;
+ (Class)profileExtensionAreaCardDouPLusControllerClass;
+ (BOOL)shouldShowLocalPromotionEntranceInSharePanel:(id)a0;
+ (BOOL)shouldShowLocalPromotionEntranceInProfileSettingPanel;
+ (void)handleLocalPromotionJumpWithParamsModel:(id)a0;
+ (void)openLocalPromotionPage:(id)a0 isLive:(BOOL)a1;
+ (id)douPlusLocalPromotionShareImageWithContext:(id)a0;
+ (id)douplusRNURLStringWithParams:(id)a0 originURLString:(id)a1;
+ (void)openLiveDouPlusWithUrlString:(id)a0 isMonitorLiveShow:(BOOL)a1 completion:(id /* block */)a2 stackVCAdjust:(id /* block */)a3 closeCompletion:(id /* block */)a4;
+ (void)oldOpenLiveDouPlusWithUrlString:(id)a0 isMonitorLiveShow:(BOOL)a1 completion:(id /* block */)a2 stackVCAdjust:(id /* block */)a3 closeCompletion:(id /* block */)a4;
+ (BOOL)shouldShowLocalPromotionInNormalScene:(id)a0;
+ (BOOL)shouldShowLocalRec:(id)a0;
+ (void)handleLocalPromotionJumpUseLocalUrl:(id)a0;
+ (void)openLocalPromotionPage:(id)a0 type:(unsigned long long)a1;
+ (id)localPromotionURLPrefixString;
+ (id)getDouPlusWebViewController:(id)a0 targetClass:(Class)a1;
+ (id)wholeSettingsKeyWithKey:(id)a0;


@end
