@class WAAppOpenSheetModeParameter, WARunningModeParameter, UINavigationController, WAProvideApiConfig, NSDictionary, UIViewController, UIView, NSString, WAContact, MiniTaskTransitionContext, WAAppOpenCustomLoadingParameter, NSArray, WAAppOpenDebugModeParameter, WAAppOpenExtJSParameter, WAAppOpenCustomUIParameter;

@interface WAAppOpenParameter : MMObject

@property (copy, nonatomic) NSString *m_nsUserName;
@property (copy, nonatomic) NSString *m_nsAppId;
@property (retain, nonatomic) WAContact *m_contact;
@property (copy, nonatomic) NSString *m_nsPagePath;
@property (nonatomic) unsigned int m_uiVersion;
@property (nonatomic) unsigned long long m_uiDebugMode;
@property (weak, nonatomic) UINavigationController *m_navigationController;
@property (weak, nonatomic) UIViewController *m_presentingViewController;
@property (nonatomic) long long m_appServiceType;
@property (nonatomic) unsigned long long m_uiScene;
@property (copy, nonatomic) NSString *m_nsSceneNote;
@property (nonatomic) unsigned long long m_uiPreScene;
@property (copy, nonatomic) NSString *m_nsPreSceneNote;
@property (nonatomic) unsigned long long m_uiChatType;
@property (nonatomic) unsigned long long m_uiCodeScene;
@property (nonatomic) BOOL m_bUpdateAndForceReloadTask;
@property (nonatomic) unsigned long long m_uiTaskReloadReason;
@property (copy, nonatomic) NSString *m_nsInstanceIdBeforeReload;
@property (retain, nonatomic) NSString *m_lastAppId;
@property (retain, nonatomic) NSArray *m_arrEntryPackages;
@property (nonatomic) unsigned long long m_taskMinimizedMode;
@property (retain, nonatomic) NSDictionary *m_nsExtraParamInfo;
@property (retain, nonatomic) NSDictionary *hostExtraData;
@property (copy, nonatomic) NSString *m_nsDebugLaunchInfo;
@property (copy, nonatomic) NSString *m_nsChatroomUsername;
@property (copy, nonatomic) NSString *m_nsChatUsername;
@property (nonatomic) unsigned long long m_launchMode;
@property (nonatomic) unsigned long long m_stackMode;
@property (nonatomic) BOOL m_bIsSilentOpen;
@property (nonatomic) unsigned long long m_uSilentOpenType;
@property (retain, nonatomic) WARunningModeParameter *m_runningModeParams;
@property (retain, nonatomic) WAProvideApiConfig *provideApiCfg;
@property (nonatomic) BOOL m_bIsOpenOnBluetoothDeviceMonitored;
@property (retain, nonatomic) WAAppOpenSheetModeParameter *m_sheetModeParameter;
@property (nonatomic) BOOL passForwardLifeCycleEventToPreviousTask;
@property (copy, nonatomic) NSString *m_nsMPShortLink;
@property (retain, nonatomic) MiniTaskTransitionContext *m_miniTaskVCAnimationContext;
@property (retain, nonatomic) WAAppOpenExtJSParameter *m_extJSParameter;
@property (nonatomic) BOOL m_bForbidUsePreloadTask;
@property (nonatomic) unsigned int m_secFlagForSinglePageMode;
@property (copy, nonatomic) NSString *m_migrateFromUsername;
@property (nonatomic) BOOL m_bIsCustomLoading;
@property (nonatomic) unsigned long long matrixUserType;
@property (retain, nonatomic) WAAppOpenCustomLoadingParameter *m_customLoadingParameter;
@property (nonatomic) unsigned long long m_uiCapsuleMenuType;
@property (nonatomic) BOOL m_bIsDirectGame;
@property (retain, nonatomic) WAAppOpenCustomUIParameter *m_customUIParameter;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WAAppOpenDebugModeParameter *m_debugModeParameter;

- (id)initWithWeAppUsername:(id)a0;
- (BOOL)hasUsrName;
- (BOOL)isParameterValid;
- (void).cxx_destruct;

@end
