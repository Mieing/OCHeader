@class NSString, AWEBannerRevisitView, AWEInterstitialRevisitView;

@interface AWEAdvertisementRevisitImpl : NSObject <BDPAdvertisementRevisitPluginDelegate>

@property (retain, nonatomic) AWEBannerRevisitView *bannerView;
@property (retain, nonatomic) AWEInterstitialRevisitView *interstitialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (id)getSettings:(id)a0;

- (id)bdp_getSettings:(id)a0;
- (void)eventWithName:(id)a0 params:(id)a1 uniqueID:(id)a2;
- (id)getParentView:(id)a0;
- (BOOL)bdp_isBannerRevisitView:(id)a0;
- (id)bdp_createBannerRevisitView:(id)a0 actionBlk:(id /* block */)a1;
- (void)bdp_showBannerRevisitView:(id)a0 completion:(id /* block */)a1;
- (void)bdp_preloadInterstitialLottie;
- (id)bdp_showInterstitialRevisitView:(id)a0 actionBlk:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
