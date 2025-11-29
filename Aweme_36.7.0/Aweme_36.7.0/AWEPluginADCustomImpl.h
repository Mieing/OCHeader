@class NSString;

@interface AWEPluginADCustomImpl : NSObject <BDPAdPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)adTaskManagerRunTasksWithParam:(id)a0;
- (BOOL)p_jumpLiveRoomWithDrawAdModel:(id)a0;
- (void)p_cardClickWithDrawModel:(id)a0 params:(id)a1 isNativeClick:(BOOL)a2 componentType:(id)a3;
- (void)sendClickTrackWithAdModel:(id)a0;
- (void)p_jumpLandingPageWithDrawAdModel:(id)a0 params:(id)a1 isNativeClick:(BOOL)a2 componentType:(id)a3;
- (id)p_generateFakeAwemeModelWithAdModel:(id)a0;
- (id)p_enterLiveRoomSchemaWithDrawAdModel:(id)a0;
- (void)bdp_bannerAdDidClickWithParam:(id)a0;
- (void)bdp_videoAdDidClickBannerWithParam:(id)a0;
- (void)bdp_videoAdDidClickButtonWithParam:(id)a0;
- (void)bdp_interstitialAdDidClickBannerWithParam:(id)a0;
- (void)bdp_interstitialAdDidClickButtonWithParam:(id)a0;
- (long long)bdp_currentHostForAd;
- (id)bdp_dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (void)bdp_drawCardAdClickWithAdModel:(id)a0 adParams:(id)a1 isNativeClick:(BOOL)a2 componentType:(id)a3;
- (void)bdp_drawAdJumpLiveWithAdModel:(id)a0;
- (void)bdp_trackAdStayTime:(long long)a0 creativeId:(id)a1 logExtra:(id)a2 techType:(long long)a3;

@end
