@interface WACacheVersionPreChecker : NSObject

- (void)startPreCheckCacheVersionWithCheckerContext:(id)a0 completion:(id /* block */)a1;
- (void)startParallelDownloadCheckWithCheckerContext:(id)a0 completion:(id /* block */)a1;
- (id)genReportKeyForWeappPluginUseWithInstanceId:(id)a0 pluginAppId:(id)a1 pluginVersion:(unsigned int)a2;
- (void)tryReportWeappSplitPluginCodeStatisCheckData:(id)a0 arrDownload:(id)a1 appID:(id)a2 appVersion:(unsigned int)a3 appState:(unsigned long long)a4 appServiceType:(unsigned int)a5 scene:(unsigned int)a6 instanceId:(id)a7;
- (void)reportSplitPluginCodeStatisCheckData:(id)a0 arrDownload:(id)a1 appID:(id)a2 appVersion:(unsigned int)a3 appState:(unsigned long long)a4 appServiceType:(unsigned int)a5 scene:(unsigned int)a6 instanceId:(id)a7;
- (BOOL)tryDoDecryptAndRemoveDecryptEnabledInfoData:(id)a0;
- (void)callCompletionForContext:(id)a0 withCompletion:(id /* block */)a1 success:(BOOL)a2 needDownloadInfoDatas:(id)a3 checkPassInfoDatas:(id)a4 checkFailedInfoDatas:(id)a5 checkAutoUpdateInfoDatas:(id)a6 pluginInfoDatas:(id)a7;
- (void)markAutoUpdatePluginInfoWithAppInfoData:(id)a0;
- (void)checkLocalCacheWithInfoDataList:(id)a0 getDownloadInfoDataList:(id)a1 getCheckPassInfoDataList:(id)a2 getCheckFailedInfoDataList:(id)a3 getCheckAutoUpdateInfoDataList:(id)a4 getPluginInfoDatas:(id)a5;
- (BOOL)checkLocalCacheOK:(id)a0;
- (id)generateInfoDatasWithPackageConfig:(id)a0 relativeUrl:(id)a1 entryPackages:(id)a2;
- (id)generateParallelDownloadInfoDatasWithContext:(id)a0;
- (id)getInfoDataWithPackageConfig:(id)a0 moduleName:(id)a1;
- (void)unfoldInfoData:(id)a0;

@end
