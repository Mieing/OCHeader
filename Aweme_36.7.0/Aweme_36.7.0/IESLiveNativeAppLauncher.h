@class NSString, GetBootConfigResponse_Data, IESLivePrivacyPolicyToken, IESLiveOpenPlatfromMorePanelItemManager, IESLiveGameOpenPlatformNativeAppMessageAdaptor, IESLiveNativeAppResourceLoader, BDLOCNativeAppInstance, IESLiveNativeAppApi;

@interface IESLiveNativeAppLauncher : NSObject <IESLiveNativeAppLoaderDelegate, BDLOCNativeAppContainerDelegate, BDLOCNativeAppPigeonMessageForwardDelegate>

@property (nonatomic) BOOL isAudience;
@property (retain, nonatomic) GetBootConfigResponse_Data *bootConfigData;
@property (retain, nonatomic) IESLiveGameOpenPlatformNativeAppMessageAdaptor *messageAdaptor;
@property (retain, nonatomic) IESLiveNativeAppResourceLoader *resourceLoader;
@property (retain, nonatomic) IESLiveOpenPlatfromMorePanelItemManager *morePanelItemManager;
@property (retain, nonatomic) BDLOCNativeAppInstance *containerInstance;
@property (retain, nonatomic) IESLivePrivacyPolicyToken *privacyToken;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) unsigned long long launchSource;
@property (nonatomic) BOOL isMicroAppRunning;
@property (retain, nonatomic) IESLiveNativeAppApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)app:(id)a0 didReceiveMessage:(id)a1 fromNativeAppWithCallback:(id /* block */)a2;
- (void)appContainerWillEnterFullScreen:(id)a0 containerVC:(id)a1;
- (void)appContainerDidEnterFullScreen:(id)a0 containerVC:(id)a1;
- (void)appContainerWillEnterSmallScreen:(id)a0 containerVC:(id)a1;
- (void)appContainerDidEnterSmallScreen:(id)a0 containerVC:(id)a1;
- (void)appContainerWillAppear:(id)a0 containerVC:(id)a1;
- (void)appContainerDidAppear:(id)a0 containerVC:(id)a1 screenRate:(double)a2;
- (void)appContainerWillDisappear:(id)a0 containerVC:(id)a1;
- (void)appContainerDidDisappear:(id)a0 containerVC:(id)a1;
- (void)appContainerWillCloseXScreenWindow:(id)a0 containerVC:(id)a1;
- (id)delegateParams;
- (void)nativeAppDidLaunch:(id)a0;
- (id)customParamsInSchema;
- (void)updateToAppID:(id)a0 appName:(id)a1 schema:(id)a2 isAudience:(BOOL)a3;
- (void)loader:(id)a0 didFailToPreprocessWithError:(id)a1;
- (void)loader:(id)a0 didFailToDownload:(id)a1;
- (void)loader:(id)a0 didFinishPostprocessingResource:(id)a1 error:(id)a2;
- (void)loader:(id)a0 didFailToPostprocessWithError:(id)a1;
- (id)_processLaunchSchema:(id)a0;
- (void)realLaunch;
- (void)launchAfterRequestBootConfig;
- (void)saveBootconfigData:(id)a0;
- (void)didFinishLaunch:(BOOL)a0;
- (void)appContainerDidAppear:(id)a0 containerVC:(id)a1;
- (void)setUp;
- (void).cxx_destruct;
- (void)launch;
- (void)dealloc;

@end
