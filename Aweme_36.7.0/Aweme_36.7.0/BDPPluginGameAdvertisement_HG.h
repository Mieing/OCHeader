@protocol BDPPluginGameVideoAdvertisementImplProtocol_HG, BDPPluginGameInterstitialAdvertisementImplProtocol_HG, BDPPluginGameBannerAdvertisementImplProtocol_HG;

@interface BDPPluginGameAdvertisement_HG : BDPBridgeInstancePlugin

@property (class, retain, nonatomic) Class bannerAdvertisementPlugin;
@property (class, retain, nonatomic) Class videoAdvertisemnetPlugin;
@property (class, retain, nonatomic) Class interstitialAdvertisemnetPlugin;

@property (retain, nonatomic) id<BDPPluginGameBannerAdvertisementImplProtocol_HG> bannerAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginGameVideoAdvertisementImplProtocol_HG> videoAdvertisementImpl;
@property (retain, nonatomic) id<BDPPluginGameInterstitialAdvertisementImplProtocol_HG> interstitialAdvertisementImpl;

- (void)createVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInterstitialAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createBannerAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateBannerAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateBannerAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
