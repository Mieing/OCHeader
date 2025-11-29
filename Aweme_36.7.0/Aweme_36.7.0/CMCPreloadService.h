@class NSString;

@interface CMCPreloadService : HTSService <CMCPreloadService> {
    BOOL _lightLandingPreloadShouldBreak;
}

@property (nonatomic) BOOL lightLandingPreloadShouldBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)preloadAppStoreWithAweme:(id)a0;
- (void)preloadAppStoreWithAppID:(id)a0 SKANParams:(id)a1 adID:(id)a2 logExtra:(id)a3 referString:(id)a4 completion:(id /* block */)a5;
- (void)preloadAppStoreWithAppID:(id)a0 SKANParams:(id)a1 adID:(id)a2 logExtra:(id)a3 referString:(id)a4 ppid:(id)a5 downloadScene:(unsigned long long)a6 webURL:(id)a7 complianceData:(id)a8 completion:(id /* block */)a9;
- (id)getThirdSiteResourceAK;
- (void)preloadLightLandingPageWithAweme:(id)a0;
- (void)cancelLightLandingPagePreloadWithAweme:(id)a0;
- (void)removeLightLandingPagePreloadWithAweme:(id)a0;
- (void)preloadMicroAppWithAweme:(id)a0;
- (void)preloadMicroAppWithURLStrings:(id)a0;
- (void)preloadLynxPageAppStore:(id)a0;
- (void)preloadLynxResourcesWithModel:(id)a0;
- (void)preloadThirdSiteResourceWithAweme:(id)a0;
- (void)preloadAggregationResourceWithAweme:(id)a0;
- (void)preloadLynxResoucesWithAweme:(id)a0;
- (void)preloadEggsCommentResoucesWithAweme:(id)a0;
- (void)preloadEggResourcesWithAweme:(id)a0;
- (void)preloadAppStoreWithAweme:(id)a0 awemeType:(long long)a1;
- (BOOL)canDropPreloadWithAweme:(id)a0;
- (void)preloadAppStoreWithAweme:(id)a0 filterBlock:(id /* block */)a1;
- (void)trackWithEggModel:(id)a0 aweme:(id)a1 success:(BOOL)a2 error:(id)a3 eggType:(id)a4;
- (id)preloadLynxAppStore:(id)a0 appID:(id)a1;
- (void)preloadGeckoResourceWithChannelName:(id)a0 accessKey:(id)a1;
- (void)preloadLynxWithUrl:(id)a0;
- (void)preloadLynxWithUrl:(id)a0 isPlayable:(BOOL)a1;

@end
