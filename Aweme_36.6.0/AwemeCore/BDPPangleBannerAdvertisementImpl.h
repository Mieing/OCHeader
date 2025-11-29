@class NSPointerArray, BDPUniqueID, NSString;

@interface BDPPangleBannerAdvertisementImpl : NSObject <CSJNativeExpressBannerViewDelegate, BDPPluginAppAdvertisementBannerImplProtocol>

@property (retain, nonatomic) NSPointerArray *adContainer;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)nativeExpressBannerAdViewDidLoad:(id)a0;
- (void)nativeExpressBannerAdView:(id)a0 didLoadFailWithError:(id)a1;
- (void)nativeExpressBannerAdViewRenderSuccess:(id)a0;
- (void)nativeExpressBannerAdViewRenderFail:(id)a0 error:(id)a1;
- (void)nativeExpressBannerAdViewWillBecomVisible:(id)a0;
- (void)nativeExpressBannerAdViewDidClick:(id)a0;
- (void)nativeExpressBannerAdView:(id)a0 dislikeWithReason:(id)a1;
- (void)nativeExpressBannerAdViewDidCloseOtherController:(id)a0 interactionType:(long long)a1;
- (void)nativeExpressBannerAdViewDidRemoved:(id)a0;
- (void)insertAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2 pageId:(long long)a3;
- (void)_onStateAdClosedWithAdUnitID:(id)a0 viewId:(id)a1 pageId:(long long)a2;
- (struct CGSize { double x0; double x1; })autoLayoutBannerSizeWithTemplate:(struct CGSize { double x0; double x1; })a0 width:(double)a1;
- (void)requestPangleRitWithUniqueID:(id)a0 adUnitId:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
