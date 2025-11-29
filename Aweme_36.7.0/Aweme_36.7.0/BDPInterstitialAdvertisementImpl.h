@class NSMutableDictionary, NSString, BDARVAlert, BDPUniqueID;

@interface BDPInterstitialAdvertisementImpl : NSObject <BDARVAlertDelegate, BDPElementFullscreenMessage, BDPCrossTalkComponentDelegate>

@property (nonatomic) long long advertisementType;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDARVAlert *currentAlert;
@property (retain, nonatomic) NSMutableDictionary *interstitialContainer;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double showStartTime;
@property (copy, nonatomic) NSString *adFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentActionType;
- (id)currentUniqueID;
- (void)exitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (void)alertWillStartLoad:(id)a0;
- (void)alert:(id)a0 didLoadFailWithError:(id)a1;
- (void)alertDidLoadSuccess:(id)a0;
- (void)alert:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)alert:(id)a0 didClickBannerWithInfo:(id)a1;
- (void)alert:(id)a0 didClickButtonWithInfo:(id)a1;
- (id)ttComponentName;
- (id)ttComponentId;
- (long long)currentPageID;
- (void)pauseByCrossTalk:(id)a0;
- (void)operateInterstitialAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)initWithAdvertisementType:(long long)a0 adFrom:(id)a1;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 error:(id)a1 errorCode:(long long)a2 errorType:(id)a3;
- (void)_onStateAdLoadedWithAdUnitID:(id)a0;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2;
- (void)_onStateAdClosedWithAdUnitID:(id)a0;
- (BOOL)_enableAdvertisement;
- (void)clearCurrentAlertForNextShow;
- (void)_setupObserver;
- (void).cxx_destruct;
- (void)_enterForeground:(id)a0;
- (void)dealloc;
- (void)_enterBackground:(id)a0;
- (id)shareMode;

@end
