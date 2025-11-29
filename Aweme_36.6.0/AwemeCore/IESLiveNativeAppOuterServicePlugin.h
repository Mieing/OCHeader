@class BDXBridgeEventSubscriber, NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppOuterServicePlugin : NSObject <IESLiveNativeAppOuterServicePlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveOpenAnchorNativeAppRouter, IESLiveNativeAppInterface, IESLiveTimorInternalAnchorRouter, IESLiveGuideTimorRouter, IESLiveNativeAppBridgeInterface> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) BDXBridgeEventSubscriber *anchorCardSubscriber;
@property (nonatomic) BOOL isOpeningShelfManageVC;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)openExplainCardSettingDialogWithParams:(id)a0 completion:(id /* block */)a1;
- (void)openExistTimorWithLocation:(id)a0 completion:(id /* block */)a1;
- (void)refreshTimorEntranceWithStamps:(id)a0;
- (BOOL)hasTimorEnter;
- (BOOL)hasTimorInfo;
- (BOOL)isMountByMission;
- (long long)isOpenRealTimeTradeInfo;
- (id)nativeAppMountMissionID;
- (void)closeShelfManagementPageWithCompletion:(id /* block */)a0;
- (void)cancelMountingNativeAppWithID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isNativeAppMounting;
- (BOOL)needUnmountNativeApp;
- (id)mountingNativeAppInfo;
- (void)unmountNativeApp;
- (BOOL)supportCoexist;
- (unsigned long long)coexistType;
- (BOOL)isMicroAppRunning;
- (void)forceStopShareScreenForNativeAppWithError:(id)a0 extra:(id)a1;
- (void)pauseShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)resumeShareScreenForNativeAppWithExtra:(id)a0 completion:(id /* block */)a1;
- (void)nativeAppUnmount;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (id)curShelfInfo;
- (BOOL)isPunishNativeApp;
- (void)showNativeAppCardEditor;
- (void)jumpNativeAppWithSchema:(id)a0 appID:(id)a1 appName:(id)a2 extraScenes:(id)a3;
- (void)jumpNativeAppWithGameItem:(id)a0;
- (void)sendMicroAppLog:(id)a0 params:(id)a1;
- (void)openMicroApp:(id)a0 extraParams:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)willEnterShelfManage;
- (void)willExitShelfManage;
- (void)openShelfCardNativeApp:(id)a0;
- (void)realJumpToItem:(id)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end
