@class WALoadingViewController, UINavigationController, NSDictionary, WAAppTaskExtInfo, UIViewController, NSMutableArray, WAPermissionHandler, WAAppTansitionController, UIView, NSString, WACacheVersionChecker, WAAppTaskLoader, WAContact, WAPackageConfig, UIColor, NSArray, WAWebViewController;
@protocol IWAPrivacyConfirmService, WAMinimizeDelegate, WAAppTaskLoaderContextDelegate;

@interface WAAppTaskLoaderContext : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) WACacheVersionChecker *cacheVersionChecker;
@property (weak, nonatomic) id<WAAppTaskLoaderContextDelegate> contextDelegate;
@property (retain, nonatomic) WAWebViewController *webView;
@property (nonatomic) BOOL isPagePushTimeout;
@property (nonatomic) BOOL isPagePushed;
@property (retain, nonatomic) NSArray *arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
@property (retain, nonatomic) id<IWAPrivacyConfirmService> privacyConfirmProxy;
@property (nonatomic) unsigned long long contextType;
@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAPackageConfig *packageConfig;
@property (retain, nonatomic) UINavigationController *weakNavigationController;
@property (weak, nonatomic) UINavigationController *weakPresentingNavigationController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) WALoadingViewController *weakLoadingViewController;
@property (retain, nonatomic) WAPermissionHandler *permissionHandler;
@property (weak, nonatomic) WAAppTaskLoader *weakTaskLoader;
@property (nonatomic) BOOL isGameApp;
@property (retain, nonatomic) NSString *relativeURL;
@property (retain, nonatomic) NSDictionary *dicFirstExtraInfo;
@property (retain, nonatomic) NSDictionary *dicChildExtraInfo;
@property (retain, nonatomic) WAWebViewController *parentWebView;
@property (nonatomic) BOOL isPopParent;
@property (nonatomic) BOOL isPopAllParent;
@property (nonatomic) BOOL bReloadFirstPage;
@property (nonatomic) BOOL bNeedShowReloadLoading;
@property (retain, nonatomic) NSDictionary *dicContextData;
@property (retain, nonatomic) WAAppTaskExtInfo *taskExtInfo;
@property (nonatomic) BOOL isUpdateAndForceReloadTask;
@property (nonatomic) unsigned long long taskReloadReason;
@property (retain, nonatomic) WAAppTansitionController *appTransitionController;
@property (weak, nonatomic) id<WAMinimizeDelegate> minimizeDelegate;
@property (nonatomic) BOOL infoDataPrecheckTriggered;
@property (nonatomic) BOOL infoDataPreChecked;
@property (retain, nonatomic) NSMutableArray *needDownloadInfoDatas;
@property (retain, nonatomic) NSMutableArray *relyPluginInfoDatas;
@property (nonatomic) BOOL loadingPresentCompleted;
@property (nonatomic) BOOL isNeedRelaunchToLatestVersion;
@property (nonatomic) BOOL isNeedRelaunchToMigrateTargetWeApp;
@property (copy, nonatomic) NSString *migrateTargetWeAppId;
@property (nonatomic) BOOL isSinglePageMode;
@property (nonatomic) BOOL isGameFunctionalPage;
@property (nonatomic) unsigned int launchMode;
@property (nonatomic) BOOL isSilentOpen;
@property (nonatomic) unsigned long long silentOpenType;
@property (nonatomic) unsigned long long darkmodeSpecificType;
@property (nonatomic) BOOL useSimulatedNativeLoadingView;
@property (nonatomic) BOOL simulatedNativeSheetModeShouldHideLeftReturnButton;
@property (nonatomic) Class customLoadingClass;
@property (copy, nonatomic) NSString *customLoadingExtraData;
@property (retain, nonatomic) NSArray *arrEntryPackages;
@property (nonatomic) BOOL noLaunchAnimation;
@property (nonatomic) BOOL forbidEntryAnimation;
@property (nonatomic) BOOL keepContextView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long loadingDarkmodeSpecificType;
@property (retain, nonatomic) UIColor *loadingBackgroundColor;
@property (retain, nonatomic) UIColor *loadingForegroundTextColor;

- (void)dealloc;
- (void)onTaskLoaderEnd;
- (void).cxx_destruct;

@end
