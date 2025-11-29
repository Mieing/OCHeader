@class NSString, IESLiveAnchorNativeAppLauncher, IESLiveNativeAppMountManager;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppLauncherPlugin : NSObject <IESLiveNativeAppLauncherPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveNativeAppMountDelegate> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) IESLiveAnchorNativeAppLauncher *launcher;
@property (retain, nonatomic) IESLiveNativeAppMountManager *mountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (BOOL)isMicroAppRunning;
- (void)pauseShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)resumeShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)forceStopSharingScreenWithError:(id)a0 extra:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)updateLaunchInfoIfHasShelfInfo;
- (void)openNativeAppWithAppID:(id)a0 appName:(id)a1 schema:(id)a2;
- (void)openNativeAppWithAppID:(id)a0 appName:(id)a1 schema:(id)a2 extraScenes:(id)a3;
- (unsigned long long)appLaunchSource;
- (id)buildNativeAppTrackParamsWithSchema:(id)a0 extraBlock:(id /* block */)a1;
- (void)onBeforeLiveNativeAppDidMountShelfInfo:(id)a0;
- (void)onDuringLiveNativeAppDidMountShelfInfo:(id)a0;
- (id)commonNativeAppTrackParams;
- (void)nativeAppDidMountShelfInfo:(id)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end
