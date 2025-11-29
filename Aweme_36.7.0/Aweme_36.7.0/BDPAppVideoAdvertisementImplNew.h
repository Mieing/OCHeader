@class NSString, NSArray, NSDictionary, BDPUniqueID, BDPMoreRewardInfo;
@protocol BDPAppVideoAdProtocol, BDPRewardVideoStateChangeDelegate;

@interface BDPAppVideoAdvertisementImplNew : NSObject <BDPAppVideoAdDelegate, BDPContainerLifeCycleMessage, BDPCrossTalkComponentDelegate, BDPPluginAppAdvertisementVideoImplNewProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) id<BDPAppVideoAdProtocol> videoAd;
@property (copy, nonatomic) id /* block */ showCallback;
@property (retain, nonatomic) NSString *adUnitId;
@property (retain, nonatomic) NSArray *rewardTasks;
@property (nonatomic) long long adType;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long watchCount;
@property (nonatomic) long long minDuration;
@property (weak, nonatomic) id<BDPRewardVideoStateChangeDelegate> rewardVideoDelegate;
@property (retain, nonatomic) BDPMoreRewardInfo *moreRewardInfo;
@property (retain, nonatomic) NSDictionary *extraRewardAdTrackDic;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double showStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (long long)currentActionType;
- (id)currentUniqueID;
- (id)ttComponentName;
- (id)ttComponentId;
- (long long)currentPageID;
- (void)pauseByCrossTalk:(id)a0;
- (void)bdp_createVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)initWithRewardVideoStateDelegate:(id)a0 adType:(long long)a1;
- (void)bdp_loadAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)bdp_showAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)bdp_destoryAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)extraRewardAdTrackDic:(id)a0;
- (void)postAudioInterruptNotification:(BOOL)a0;
- (void)_sendRequsetUseAdRightWithUnitId:(id)a0;
- (void)_checkCurrentUserHasRightToSkipWithUnitId:(id)a0 complete:(id /* block */)a1;
- (void)_onPrepareShowRightSkipAlertComplete:(id /* block */)a0;
- (BOOL)_adEnable;
- (void)_onErrorWithUniqueID:(id)a0 adUnitId:(id)a1 errCode:(long long)a2 errorCode:(long long)a3 errMsg:(id)a4 errorType:(id)a5;
- (void)_operationEventWithAdUnitId:(id)a0 operationType:(id)a1 error:(id)a2;
- (void)_onLoadedWithUniqueID:(id)a0 adUnitId:(id)a1;
- (BOOL)_preCheckWithAdUnitId:(id)a0 error:(id *)a1;
- (void)_onCloseWithUniqueID:(id)a0 adUnitId:(id)a1 mode:(id)a2 count:(long long)a3;
- (void)_loadResultEventWithVideoAD:(id)a0 adUnitId:(id)a1 error:(id)a2;
- (void)bdp_videoAdDidLoadSuccess:(id)a0;
- (void)bdp_videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)bdp_videoAdBecomeEffective:(id)a0;
- (void)bdp_videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)bdp_videoAdRenderFail:(id)a0 error:(id)a1;
- (void)bdp_videoAdStartPlay:(id)a0;
- (void)bdp_videoAd:(id)a0 didClickBannerCardWithInfo:(id)a1;
- (void)bdp_videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (id)bdp_moreRewardInfoForVideoAd:(id)a0;
- (long long)bdp_minDuraion;
- (id)bdp_extraRewardADTrackInfo;
- (void).cxx_destruct;
- (id)shareMode;

@end
