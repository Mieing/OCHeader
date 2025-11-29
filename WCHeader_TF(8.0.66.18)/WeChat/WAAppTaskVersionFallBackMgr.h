@class NSString, WAAppTaskVersionFallBackMarkItem, NSMutableArray;

@interface WAAppTaskVersionFallBackMgr : MMUserService <WAContactMgrExtension, IWALocalCacheMgrExt, MMServiceProtocol>

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) WAAppTaskVersionFallBackMarkItem *currentLaunchItem;
@property (retain, nonatomic) NSMutableArray *markItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)reset;
- (void)startTickForUsername:(id)a0 appid:(id)a1;
- (void)stopTick;
- (void)doFallBackLogic:(unsigned long long)a0 username:(id)a1 appid:(id)a2;
- (void)markCurrentLaunchItemInFallbackList;
- (unsigned int)getFallBackTickGapForUsername:(id)a0 appid:(id)a1;
- (void)markStartLaunchUsername:(id)a0 appid:(id)a1 instanceId:(id)a2 openScene:(unsigned long long)a3 targetAppVersion:(unsigned int)a4 debugModeType:(unsigned long long)a5;
- (void)markContactNeedSyncUpdateForUsername:(id)a0 appid:(id)a1;
- (void)markPkgNeedDownloadForUsername:(id)a0 appid:(id)a1 needDowndloadInfoDatas:(id)a2;
- (void)checkFallbackMinVersionIfValidWithUsername:(id)a0 appid:(id)a1;
- (unsigned int)getLaunchFallbackMinVersionForContact:(id)a0;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onUpdateWeAppContactSuccess:(id)a0;
- (void)onUpdateWeAppContactFailedWithKey:(id)a0 type:(unsigned long long)a1 errMsg:(id)a2;
- (void)onUpdateAppPkgComplete:(BOOL)a0 withAppInfoData:(id)a1 errorCode:(unsigned int)a2 errorMsg:(id)a3;
- (void).cxx_destruct;

@end
