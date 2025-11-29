@interface BDPPluginApplication : BDPBridgeInstancePlugin

+ (void)addEntranceInfoToOptionsIfNeeded:(id)a0 withCurrentScheme:(id)a1;

- (BOOL)isAweType;
- (BOOL)startPathReplace;
- (void)innerGetMetaDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_jumpPopupShowWithUniqueID:(id)a0 model:(id)a1 param:(id)a2 callback:(id /* block */)a3 instance:(id)a4 recording:(BOOL)a5;
- (void)_transferToMiniProgramFrom:(id)a0 to:(id)a1 withParams:(id)a2 completion:(id /* block */)a3;
- (void)trackJumpPopupClickWithFromApp:(id)a0 to:(id)a1 withParams:(id)a2 clickType:(id)a3 version:(long long)a4;
- (void)trackJumpPopupShowWithFromApp:(id)a0 to:(id)a1 withParams:(id)a2 version:(long long)a3;
- (void)getExtConfigWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)getTextAndImageWithWebviewContent:(id)a0;
- (id)encryptWithParam:(id)a0 originDic:(id)a1;
- (id)getSceneInfoFrom:(id)a0 error:(id *)a1;
- (id)getSceneInfo:(id)a0 type:(long long)a1;
- (void)exitMiniProgramWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getLaunchOptionsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAppInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerGetMetaDataSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateToMiniProgramWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateBackMiniProgramWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getExtConfigSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)exposeAppbrandSettingsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAppbrandSettingsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onBeforeCloseReturnSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPerformanceTimingSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateConfigJSONWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPageTextAndImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAnalysisInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getCanIUseSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
