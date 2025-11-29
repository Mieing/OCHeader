@class NSString;
@protocol BDPPluginAppAdvertisementVideoImplNewProtocol, BDPPluginAppAdvertisementBannerImplProtocol, BDPPluginAppFlowAdvertisementImplProtocol, BDPPluginAppAdvertisementInterstitialImplProtocol, BDPPluginAppDrawAdImplProtocol, BDPPluginAppAdvertisementVideoImplProtocol;

@interface BDPPluginAppAdvertisement : BDPBridgeInstancePlugin <BDPRewardVideoStateChangeDelegate>

@property (class, retain, nonatomic) Class bannerAdvertisementPlugin;
@property (class, retain, nonatomic) Class videoAdvertisemnetPlugin;
@property (class, retain, nonatomic) Class videoAdvertisementNewPlugin;
@property (class, retain, nonatomic) Class pangleBannerAdvertisementPlugin;
@property (class, retain, nonatomic) Class interstitialAdvertisemnetPlugin;
@property (class, retain, nonatomic) Class drawAdPlugin;
@property (class, retain, nonatomic) Class flowAdPlugin;

@property (retain, nonatomic) id<BDPPluginAppAdvertisementBannerImplProtocol> bannerAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementVideoImplProtocol> videoAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementVideoImplNewProtocol> videoAdvertisementNewImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementBannerImplProtocol> pangleBannerAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppAdvertisementInterstitialImplProtocol> interstitialAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginAppDrawAdImplProtocol> drawAdImpl;
@property (retain, nonatomic) id<BDPPluginAppFlowAdvertisementImplProtocol> flowAdImpl;
@property (nonatomic) long long adType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeAdContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_createVideoAdImplIfNeedWithUniqueId:(id)a0;
- (void)createVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInterstitialAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_advertisementStateChangeWithUniqueID:(id)a0 adUnitID:(id)a1 state:(id)a2 data:(id)a3;
- (void)insertDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)preloadDrawAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)insertFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)bdp_onErrorWithUniqueID:(id)a0 adUnitId:(id)a1 errCode:(long long)a2 errorCode:(long long)a3 errMsg:(id)a4 errorType:(id)a5;
- (void)bdp_onLoadedWithUniqueID:(id)a0 adUnitId:(id)a1;
- (void)bdp_didClickCloseWithUniqueID:(id)a0 adUnitId:(id)a1 count:(long long)a2 mode:(id)a3;
- (void)preloadFlowAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
