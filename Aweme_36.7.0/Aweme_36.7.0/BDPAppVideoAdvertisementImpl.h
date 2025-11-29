@class NSError, NSString, BDPUniqueID, NSMutableDictionary, NSDictionary, BDPMoreRewardInfo, BDPAppVideoAdvRevisitConfigModel, NSMapTable;

@interface BDPAppVideoAdvertisementImpl : NSObject <BDARewardedVideoAdDelegate, BDARewardedVideoAlertDelegate, BDPContainerLifeCycleMessage, BDPPluginAppAdvertisementVideoImplProtocol>

@property (nonatomic) BOOL isAdShowing;
@property (nonatomic) BOOL presentingVideo;
@property (nonatomic) long long watchCount;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *videoContainer;
@property (retain, nonatomic) BDPAppVideoAdvRevisitConfigModel *revisitConfigModel;
@property (retain, nonatomic) NSMapTable *uniqueIdToAdVideoMap_forRevisit;
@property (retain, nonatomic) NSError *currentLoadError;
@property (retain, nonatomic) BDPMoreRewardInfo *moreRewardInfo;
@property (nonatomic) long long minDuration;
@property (copy, nonatomic) NSString *createADUnitId;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double showStartTime;
@property (retain, nonatomic) NSDictionary *extraRewardAdTrackDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAdDidLoadSuccess:(id)a0;
- (void)videoAd:(id)a0 didClickBannerCardWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdStartPlay:(id)a0 isResume:(BOOL)a1;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (id)show:(id)a0 retainTime:(long long)a1 title:(id)a2;
- (long long)currentActionType;
- (void)viewWillAppear:(id)a0 uniqueID:(id)a1;
- (id)currentUniqueID;
- (id)ttComponentName;
- (id)ttComponentId;
- (long long)currentPageID;
- (void)pauseByCrossTalk:(id)a0;
- (void)createVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 error:(id)a1 errorCode:(long long)a2 errorType:(id)a3;
- (void)_onStateAdLoadedWithAdUnitID:(id)a0;
- (void)extraRewardAdTrackDic:(id)a0;
- (void)postAudioInterruptNotification:(BOOL)a0;
- (void)_sendRequsetUseAdRightWithUnitId:(id)a0;
- (void)_onStateAdClosedWithAdUnitID:(id)a0 count:(long long)a1 mode:(id)a2;
- (id)_createVideoAdWithParam:(id)a0 instance:(id)a1;
- (void)_checkCurrentUserHasRightToSkipWithUnitId:(id)a0 complete:(id /* block */)a1;
- (void)_onPrepareShowRightSkipAlertComplete:(id /* block */)a0;
- (id)appendMoreRewardInfo:(id)a0 originDict:(id)a1;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2;
- (void)p_invokeVideoAdCallbackByState:(id)a0 rewardedVideo:(id)a1 extarData:(id)a2;
- (BOOL)showRevisitGuideWithError:(id)a0 rewardedVideo:(id)a1;
- (id)_getGuideFrequencyKey;
- (BOOL)showShareRewardWithRewardedVideo:(id)a0;
- (BOOL)checkingIsAbleToPresentVideo:(id)a0 navigationController:(id)a1;
- (BOOL)_finishADWithWatchedTime:(id)a0 effectiveTime:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getCurrentTime;
- (id)shareMode;

@end
