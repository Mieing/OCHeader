@class NSString, NSMutableDictionary, BDPGameVideoAdShareInspireConfig, BDPGameVideoAdBackupController, BDPUniqueID, BDPGameVideoAdvertisementPreloadStrategy;

@interface BDPGameVideoAdvertisementImplHg : NSObject <BDPBootLifeCycleMessage, BDARewardedVideoAdDelegate, BDARewardedVideoAlertDelegate, UINavigationControllerDelegate, BDPGameVideoAdBackupControllerDelegate, BDPPluginGameVideoAdvertisementImplProtocol_HG>

@property (nonatomic) long long watchCount;
@property (copy, nonatomic) NSString *multitonRewardedMsg;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *videoContainer;
@property (nonatomic) BOOL isShareInspireValid;
@property (nonatomic) double lastShareTime;
@property (retain, nonatomic) BDPGameVideoAdShareInspireConfig *shareInspireConfig;
@property (retain, nonatomic) BDPGameVideoAdBackupController *backupController;
@property (nonatomic) long long preferredResolution;
@property (retain, nonatomic) BDPGameVideoAdvertisementPreloadStrategy *preloadStrategy;
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
- (void)videoFirstFrameSDK:(id)a0 context:(id)a1;
- (void)videoAdBecomeEffective:(id)a0;
- (void)videoAdMoreRewardDisplayInfo:(id)a0 index:(long long)a1 callBack:(id /* block */)a2;
- (id)show:(id)a0 retainTime:(long long)a1 title:(id)a2;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)createVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateVideoAdWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_createVideoAdWithParam:(id)a0 instance:(id)a1;
- (void)_advertisementStateChangeWithAdUnitID:(id)a0 state:(id)a1 data:(id)a2;
- (void)_onStateAdErrorWithAdUnitID:(id)a0 error:(id)a1;
- (void)gameVideoAdBackupStartLoadTemplate:(id)a0 originVideo:(id)a1;
- (void)gameVideoAdBackupBecomeInspired:(id)a0 originVideo:(id)a1;
- (void)gameVideoAdBackupClose:(id)a0 originVideo:(id)a1 info:(id)a2;
- (void)gameVideoAdBackupLoadFail:(id)a0 originVideo:(id)a1;
- (void)gameVideoAdBackupLoadSuccess:(id)a0 originVideo:(id)a1;
- (void)_onStateAdLoadedWithAdUnitID:(id)a0 uniqueID:(id)a1;
- (void)getRewardedVideoAdInspireConfig;
- (void)_onStateAdClosedWithAdUnitID:(id)a0 count:(long long)a1;
- (void)handleOperateTypeShow:(id)a0 callback:(id /* block */)a1;
- (void)handleOperateTypeLoad:(id)a0 type:(id)a1 video:(id)a2 callback:(id /* block */)a3;
- (void)handleOperateTypeDestroy:(id)a0 type:(id)a1 adUnitId:(id)a2 callback:(id /* block */)a3;
- (BOOL)_enableMultitonFromSettingsOrABTest:(id)a0;
- (long long)gameVideoPreferredResolution;
- (void)onAdInspireFailForShow:(id)a0 failType:(unsigned long long)a1;
- (void)reportMemory:(id)a0;
- (void)onAdInspireSuccessForShow:(id)a0;
- (void)shareAfterVideoADLoadFailed:(id)a0 error:(id)a1;
- (void)restoreGameOrientation;
- (BOOL)isValidForIntervalAndTimesLimit:(id)a0 error:(id)a1;
- (id)getSCVideoPath;
- (id)getRecentVideoPath;
- (void)showConfirmByDialog:(id)a0 recordVideoPath:(id)a1;
- (void)showConfirmByToast:(id)a0 recordVideoPath:(id)a1;
- (void)showShareMessageToastAndShareGame:(id)a0;
- (void)shareRecordVideoForInspire:(id)a0 recordVideoPath:(id)a1;
- (void)onAdInspireFailForClose:(id)a0;
- (void)onAdInspireSuccessForClose:(id)a0;
- (id)_transformError:(id)a0 withFailType:(unsigned long long)a1;
- (id)getAdMemoryOptConfig;
- (BOOL)mpIDInBlockList:(id)a0;
- (long long)getThresholdMemoryFromSetting:(id)a0;
- (long long)resolutionToType:(long long)a0;
- (BOOL)_enableMultitonFromSettings:(id)a0;
- (void)_setupObserver;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;

@end
