@class NSPointerArray, BDPUniqueID, NSString;

@interface BDPAppBannerAdvertisementImpl : NSObject <BDARVBannerDelegate, BDARVCardViewContainerDelegate, BDPPluginAppAdvertisementBannerImplProtocol>

@property (nonatomic) BOOL isEnterBackground;
@property (retain, nonatomic) NSPointerArray *adContainer;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
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
- (void)cardViewContainerDidLoadFailWithError:(id)a0 error:(id)a1;
- (void)cardViewContainerDidLoadSuccess:(id)a0;
- (void)cardViewContainer:(id)a0 didContentResize:(struct CGSize { double x0; double x1; })a1 info:(id)a2;
- (void)cardViewContainer:(id)a0 didClickCardViewWithInfo:(id)a1 completed:(id /* block */)a2;
- (void)cardViewContainer:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)insertAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_insertBannerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_insertFeedWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 pageId:(long long)a1 error:(id)a2 errorCode:(long long)a3 errorType:(id)a4;
- (void)_stopTimerForBanner:(id)a0;
- (void)_startTimerForBannerIfNeed:(id)a0;
- (void)_refreshCardViewVisibleState:(id)a0;
- (id)_feedADModelList:(id)a0;
- (void)_updateCardViewsVisibleState;
- (BOOL)_getCardOnScreenState:(id)a0;
- (id)_feedADModelFromBannerStyle:(id)a0 scaleRate:(double)a1;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2 pageId:(long long)a3;
- (void)_stopOrStartBannerAdTimer:(BOOL)a0;
- (void)_onStateAdClosedWithAdUnitID:(id)a0 viewId:(id)a1 pageId:(long long)a2;
- (void)_onStateAdResizeWithAdUnitID:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pageId:(long long)a2;
- (void)_onStateAdLoadedWithAdUnitID:(id)a0 pageId:(long long)a1;
- (void)cardViewContainer:(id)a0 didClickBannerWithInfo:(id)a1;
- (void)_setupObserver;
- (void).cxx_destruct;
- (id)init;
- (void)_enterForeground:(id)a0;
- (void)_enterBackground:(id)a0;

@end
