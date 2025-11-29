@class UIViewController, NSString, WAUINavigationController, WAAppTaskTransitInfo, WAAppTaskReferrerInfo, WAPageFlowSessionInfo, WAAppTaskWebLaunchInfo, NSMutableDictionary, WAPageFlowAppInfo, WAAppTansitionController, WALoadingViewController, WAAppTaskCapsuleMenu;

@interface WAAppTaskExtInfo : NSObject

@property (retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo;
@property (retain, nonatomic) WAAppTaskWebLaunchInfo *webLaunchInfo;
@property (retain, nonatomic) WAAppTaskTransitInfo *transitInfo;
@property (copy, nonatomic) NSString *chatName;
@property (copy, nonatomic) NSString *shareKey;
@property (nonatomic) BOOL beSpecificPage;
@property (retain, nonatomic) WAPageFlowAppInfo *taskAppInfo;
@property (retain, nonatomic) WAPageFlowSessionInfo *taskSessionInfo;
@property (copy, nonatomic) NSString *opensdkAppID;
@property (nonatomic) BOOL isSilentOpen;
@property (nonatomic) unsigned int silentOpenType;
@property (nonatomic) BOOL isRemoteMode;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *pkgInfo;
@property (nonatomic) unsigned int channelType;
@property (nonatomic) unsigned int debugType;
@property (nonatomic) BOOL isGameIOSRemoteDebug;
@property (nonatomic) BOOL isSkipGameJSWrap;
@property (nonatomic) unsigned int proxyPort;
@property (nonatomic) BOOL ignoreDomain;
@property (nonatomic) unsigned int supportCompressAlgo;
@property (retain, nonatomic) NSString *wsEndPoint;
@property (retain, nonatomic) NSMutableDictionary *dynamicInfo;
@property (nonatomic) BOOL isUseParalelRequest;
@property (nonatomic) BOOL launchAppLoaderReloaded;
@property (nonatomic) BOOL relaunchAppLoaderReloaded;
@property (nonatomic) BOOL aliveFailedRebooted;
@property (retain, nonatomic) WAUINavigationController *miniNavigationController;
@property (retain, nonatomic) WALoadingViewController *preloadWALoadingVC;
@property (retain, nonatomic) WAUINavigationController *preloadNavigationController;
@property (retain, nonatomic) WAAppTaskCapsuleMenu *preloadCapsuleMenu;
@property (retain, nonatomic) WAAppTansitionController *preloadAppTransitionController;
@property (nonatomic) BOOL noReLaunch;
@property (retain, nonatomic) UIViewController *gameStartupCoverVC;
@property (nonatomic) BOOL asyncLaunchPubResRelyUpdateRebooted;
@property (nonatomic) BOOL shouldForbidRecentForward;
@property (nonatomic) BOOL shouldDelayRestartGame;

- (void).cxx_destruct;

@end
