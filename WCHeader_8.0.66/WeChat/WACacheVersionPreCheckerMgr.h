@class NSMutableDictionary, NSString, WAPackageUpdateLogic, NSMutableArray;

@interface WACacheVersionPreCheckerMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *checkers;
@property (readonly, nonatomic) WAPackageUpdateLogic *pluginPkgUpdateLogic;
@property (readonly, nonatomic) NSMutableArray *arrReportUseWeappPlugins;
@property (readonly, nonatomic) NSMutableDictionary *dicAutoUpdatePluginKey2VersionInfo;
@property (readonly, nonatomic) NSMutableDictionary *dicWeAppPluginVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startPreCheckCacheVersionWithCheckerContext:(id)a0;
- (void)startParallelDownloadCheckWithCheckerContext:(id)a0;
- (void)clearPreCheckCacheVersionResultForAppid:(id)a0 appVersion:(unsigned long long)a1 debugType:(unsigned int)a2;
- (BOOL)checkIsNeedDownloadPkgWithPackageConfig:(id)a0 pagePath:(id)a1;
- (id)getPreCheckCacheVersionResultForAppid:(id)a0 appVersion:(unsigned long long)a1 debugType:(unsigned int)a2;
- (void)onAppTaskTerminateWithContact:(id)a0;
- (void).cxx_destruct;

@end
