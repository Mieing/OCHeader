@class NSMutableDictionary, NSString, BDPAdFrequencyControlManager_HG, BDPUniqueID;
@protocol BDPAdvertisementRevisitPluginDelegate;

@interface BDPGameBannerAdvertisementImplHg : NSObject <BDARVBannerDelegate, BDPGameJumpingView_HGDelegate, BDPPluginGameBannerAdvertisementImplProtocol_HG>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAdFrequencyControlManager_HG *frequencyControl;
@property (retain, nonatomic) NSMutableDictionary *adContainer;
@property (retain, nonatomic) id<BDPAdvertisementRevisitPluginDelegate> revisitPluginDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)banner:(id)a0 didClickBannerWithInfo:(id)a1;
- (void)banner:(id)a0 didContentResize:(struct CGSize { double x0; double x1; })a1;
- (void)banner:(id)a0 didClickButtonWithInfo:(id)a1;
- (void)bannerWillStartLoad:(id)a0;
- (void)banner:(id)a0 didLoadFailWithError:(id)a1;
- (void)bannerDidLoadSuccess:(id)a0;
- (void)banner:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)onClickGameJumpingViewCloseButton:(id)a0;
- (void)createBannerAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateBannerAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateBannerAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_stopTimerForBanner:(id)a0;
- (void)_startTimerForBannerIfNeed:(id)a0;
- (void)_stopOrStartBannerAdTimer:(BOOL)a0;
- (void)_onStateAdLoadedWithAdUnitID:(id)a0;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 error:(id)a1;
- (void)preloadRevisitImage;
- (void)p_setCloseTimeWithUniqueID:(id)a0;
- (void)_onStateAdResizeWithAdUnitID:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_onStateAdClosedWithAdUnitID:(id)a0;
- (void)_setupObserver;
- (void).cxx_destruct;
- (id)init;
- (void)_enterForeground:(id)a0;
- (void)_enterBackground:(id)a0;

@end
