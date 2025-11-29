@class NSString, NSMutableDictionary, NSMutableSet, NSArray;

@interface WAPermissionMgr : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_reportInfos;
    NSMutableSet *_setParallelPrefetching;
    NSMutableSet *_setWaitingParallelPrefetching;
    NSMutableDictionary *_dicParallelPrefetchResult;
    NSArray *_abTestPermissionInfoList;
    NSArray *_pluginPermissionInfoList;
}

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int debugModeType;
@property (nonatomic) BOOL isFirstTimeCheckPluginPermission;
@property (nonatomic) BOOL isFirstTimeCheckABTestPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)getPermissionMode:(id)a0;
+ (BOOL)checkJsAPI:(id)a0 haveRunMode:(unsigned int)a1;
+ (id)getPermissionByte:(id)a0;
+ (unsigned int)getEventThreadMode:(id)a0;
+ (id)dictionayOfJSAPI2PermissionIndex;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearParallelPrefetchInfo;
- (id)getPermissionInfoWithAppID:(id)a0;
- (id)getPermissionInfoWithUsername:(id)a0;
- (id)getPermissionBanInfoWithAppID:(id)a0;
- (id)getPluginPermissionInfoWithAppID:(id)a0;
- (void)requestPureJSApiPermissionWithAppID:(id)a0 userName:(id)a1 scene:(unsigned long long)a2 isSilentOpen:(BOOL)a3 silentOpenType:(unsigned int)a4 syncType:(unsigned int)a5 completion:(id /* block */)a6;
- (BOOL)requestPluginPermissonInfoWithAppID:(id)a0 userName:(id)a1 isFirstTime:(BOOL)a2 isolatePluginCount:(int)a3 debugModeType:(unsigned int)a4 pluginIDArray:(id)a5 scene:(unsigned int)a6 isSilentOpen:(BOOL)a7 silentOpenType:(unsigned int)a8 syncType:(int)a9;
- (BOOL)requestABTestPermissonInfoWithAppID:(id)a0 userName:(id)a1 isFirstTime:(BOOL)a2 debugModeType:(unsigned int)a3 appIDArray:(id)a4 isSilentOpen:(BOOL)a5 silentOpenType:(unsigned int)a6 syncType:(int)a7;
- (int)getCommRequestSourceSyncTypeForLaunchRequestType:(int)a0 isDirectGame:(BOOL)a1;
- (BOOL)requestLaunchPermissonInfoWithAppID:(id)a0 userName:(id)a1 debugModeType:(unsigned int)a2 appVersion:(unsigned int)a3 scene:(unsigned int)a4 appServiceType:(unsigned int)a5 sessionId:(id)a6 pagePath:(id)a7 isFromBackground:(BOOL)a8 requestType:(unsigned int)a9 dicLaunchParameter:(id)a10 isFromParallelLaunch:(BOOL)a11;
- (BOOL)hasValidIssueLaunchForAppid:(id)a0 username:(id)a1 scene:(unsigned int)a2;
- (BOOL)isIssueLaunchInfoValid:(id)a0 inScene:(unsigned int)a1;
- (id)tryGetLocalResponseWithUsername:(id)a0 appid:(id)a1 inScene:(unsigned int)a2;
- (id)generateLaunchCGIUserInfo:(id)a0 debugMode:(unsigned int)a1 enterScene:(unsigned int)a2 sessionId:(id)a3 isFromBackground:(BOOL)a4 isSilentOpen:(BOOL)a5 isSheetMode:(BOOL)a6 isCustomLoading:(BOOL)a7 launchMode:(unsigned int)a8 migrateFromUsername:(id)a9;
- (BOOL)updateLaunchWithResponse:(id)a0 appId:(id)a1;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (id)getPluginPermissionList;
- (id)getABTestPermissionList;
- (void)setABTestPermissionList:(id)a0;
- (void)setPluginPermissionList:(id)a0;
- (unsigned int)getReportTypeFromRequestType:(unsigned int)a0;
- (void)processPluginPermissionInfo:(id)a0;
- (void)processABTestPermissionInfo:(id)a0;
- (void)processPluginPermissionInfoAsync;
- (void)onResponseLaunchPermissionInfo:(id)a0;
- (void)reportResponse:(id)a0;
- (void)reportPluginResponse:(id)a0;
- (void)reportGameABTestResponse:(id)a0;
- (void)processResponseLaunchPermissionInfoWithRequest:(id)a0 andResponse:(id)a1 cgiUserInfo:(id)a2;
- (BOOL)shouldUpdateSiderbarHistoryItem:(id)a0;
- (void)executeIssueLaunchCmd:(id)a0;
- (id)launchActionFromResponse:(id)a0;
- (id)runtimeInfoFromResponse:(id)a0;
- (id)actionSheetInfoFromResponse:(id)a0;
- (id)getPermissionBytesWithAppID:(id)a0;
- (void)updateAppItem:(id)a0;
- (void)updateUsageItem:(id)a0;
- (void).cxx_destruct;

@end
