@class NSMutableDictionary;

@interface BDPPluginApplication_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) NSMutableDictionary *snapshotCallback;

+ (void)addEntranceInfoToOptionsIfNeeded:(id)a0 withCurrentScheme:(id)a1;

- (void)getSnapshotFromFE:(id)a0 callbackID:(id)a1 snapshotCallback:(id /* block */)a2;
- (void)exitMiniProgramWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getLaunchOptionsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAppInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateToMiniProgramWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateBackMiniProgramWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getAppbrandSettingsSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onBeforeCloseReturnSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPerformanceTimingSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateConfigJSONWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getHostLaunchQueryWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onSnapshotReadyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 isTimeout:(BOOL)a3;
- (void)restartMiniProgramSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getMenuButtonBoundingClientRectWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getLeftMenuButtonBoundingClientRectWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getHostLaunchQuerySyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showMorePanelWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setMenuButtonVisibilityWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onSnapshotReadyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getEnvironmentVariablesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
