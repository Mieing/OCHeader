@class NSMutableDictionary, NSString, UIView, BDPUniqueID;
@protocol BDPAdvertisementRevisitPluginDelegate;

@interface BDPGameInterstitialAdvertisementImplHg : NSObject <BDARVAlertDelegate, BDPGameJumpingView_HGDelegate, BDPAppInterfaceOrientationChangeMessage, BDPPluginGameInterstitialAdvertisementImplProtocol_HG>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) NSMutableDictionary *interstitialContainer;
@property (retain, nonatomic) id<BDPAdvertisementRevisitPluginDelegate> revisitPluginDelegate;
@property (copy, nonatomic) id /* block */ delayAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)setDeviceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)alertWillStartLoad:(id)a0;
- (void)alert:(id)a0 didLoadFailWithError:(id)a1;
- (void)alertDidLoadSuccess:(id)a0;
- (void)alert:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)alert:(id)a0 didClickBannerWithInfo:(id)a1;
- (void)alert:(id)a0 didClickButtonWithInfo:(id)a1;
- (void)onClickGameJumpingViewCloseButton:(id)a0;
- (void)operateInterstitialAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_onStateAdLoadedWithAdUnitID:(id)a0;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 error:(id)a1;
- (void)p_setCloseTimeWithUniqueID:(id)a0;
- (void)_onStateAdClosedWithAdUnitID:(id)a0;
- (BOOL)_enableAdvertisement;
- (void)_currentViewClose;
- (void)_setupObserver;
- (void).cxx_destruct;
- (id)init;
- (void)_enterForeground:(id)a0;
- (void)dealloc;
- (void)_enterBackground:(id)a0;

@end
