@class NSRecursiveLock, NSMutableDictionary, NSString, NSMutableSet;

@interface MagicAdCommonService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *hasGetAdsTaskSet;
@property (nonatomic) BOOL autoGetAdsSwitch;
@property (retain, nonatomic) NSRecursiveLock *hasGetAdsTaskLock;
@property (retain, nonatomic) NSMutableDictionary *adExposureTimers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAdInfoWithPosId:(id)a0;
- (id)saveAdInfoWithPosId:(id)a0 jsonString:(id)a1;
- (void)handleAdOpenWithAid:(id)a0;
- (void)handleAdOpenWithAid:(id)a0 schemaExtra:(id)a1 jumpAppAlertShowHandler:(id /* block */)a2 jumpAppConfirmHandler:(id /* block */)a3 jumpAppDoneHandler:(id /* block */)a4 openAppStoreBeforeHandler:(id /* block */)a5 openAppStoreAppDoneHandler:(id /* block */)a6;
- (void)handleAdOpenWithAid:(id)a0 schemaExtra:(id)a1 launchAppShowType:(unsigned char)a2 jumpAppAlertShowHandler:(id /* block */)a3 jumpAppConfirmHandler:(id /* block */)a4 jumpAppDoneHandler:(id /* block */)a5 openAppStoreBeforeHandler:(id /* block */)a6 openAppStoreAppDoneHandler:(id /* block */)a7;
- (void)handleAdFeedbackCloseWithAid:(id)a0;
- (void)reportAdWithAid:(id)a0 reportType:(unsigned char)a1;
- (void)cleanAdInfoWithAid:(id)a0;
- (void)cleanAdInfoWithPosId:(id)a0;
- (void)cleanAllAdCache;
- (unsigned char)checkAppInstallStatusWithAid:(id)a0;
- (BOOL)passFeedbackCloseCheck:(id)a0;
- (void)updateAdInfosByCGIInstantlyWithPosIds:(id)a0 pullType:(unsigned char)a1 isDelayPull:(BOOL)a2;
- (void)triggerUpdateAdsWithPosIds:(id)a0 pullType:(unsigned char)a1;
- (void)jumpToAppWithAdsInfo:(id)a0 schemaExtra:(id)a1 launchAppShowType:(unsigned char)a2 confirmHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)installAppWithAdsInfo:(id)a0 completion:(id /* block */)a1;
- (void)innerReportAdWithAid:(id)a0 adsInfo:(id)a1 reportType:(unsigned char)a2;
- (void)innerReportAdWithAid:(id)a0 adsInfo:(id)a1 reportType:(unsigned char)a2 notDisplayAdReason:(unsigned char)a3;
- (void)innerReportAdForPCADWithAid:(id)a0 adsInfo:(id)a1 reportType:(unsigned char)a2 notDisplayAdReason:(unsigned char)a3;
- (void)innerReportAdForWXADOfNormalWithAid:(id)a0 adsInfo:(id)a1 reportType:(unsigned char)a2 notDisplayAdReason:(unsigned char)a3;
- (void)innerReportAdForWXADOfPayWithAid:(id)a0 adsInfo:(id)a1 reportType:(unsigned char)a2 notDisplayAdReason:(unsigned char)a3;
- (void)innerKVReportWhenCGIReportWithAid:(id)a0 adsInfo:(id)a1 reportType:(unsigned char)a2 notDisplayAdReason:(unsigned char)a3;
- (unsigned char)mapReportTypeToActionType:(unsigned char)a0;
- (BOOL)checkAdHasExpiredWithPosId:(id)a0;
- (void)innerUpdateAdInfoAndCleanOldInfo:(id)a0 expireTime:(unsigned long long)a1;
- (BOOL)isInstalledWithAdInfo:(id)a0;
- (void)cleanCacheAdInfoWithPosIds:(id)a0;
- (void)autoGetAdIfNeeded;
- (void)startRecordAdExposureTimeWithAid:(id)a0;
- (id)safeGetExposureTimerWithAid:(id)a0;
- (id)safeGetAllExposureTimers;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void).cxx_destruct;

@end
