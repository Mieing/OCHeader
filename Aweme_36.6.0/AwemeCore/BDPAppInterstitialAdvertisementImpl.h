@class NSString, BDPInterstitialAdvertisementImpl;

@interface BDPAppInterstitialAdvertisementImpl : NSObject <BDPPluginAppAdvertisementInterstitialImplProtocol>

@property (retain, nonatomic) BDPInterstitialAdvertisementImpl *adImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)operateInterstitialAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
