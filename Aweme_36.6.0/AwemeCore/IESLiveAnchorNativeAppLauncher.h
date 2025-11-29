@class IESLiveNativeAppShareScreenManager, IESLiveNativeAppMountManager;

@interface IESLiveAnchorNativeAppLauncher : IESLiveNativeAppLauncher

@property (retain, nonatomic) IESLiveNativeAppShareScreenManager *shareScreenManager;
@property (weak, nonatomic) IESLiveNativeAppMountManager *mountManager;
@property (nonatomic) BOOL hasLaunchedWithExtraConfig;

- (void)pauseShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)resumeShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)forceStopSharingScreenWithError:(id)a0 extra:(id)a1;
- (id)buildShelfInfoWithPresetCardList:(id)a0;
- (id)delegateParams;
- (void)launchWithMountManager:(id)a0 extraScenes:(id)a1;
- (void)nativeAppDidLaunch:(id)a0;
- (id)customParamsInSchema;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;

@end
