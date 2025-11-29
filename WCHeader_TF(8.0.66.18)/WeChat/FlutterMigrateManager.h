@class NSString, UIViewController, MMFlutterInstance;

@interface FlutterMigrateManager : NSObject <INewSyncExt, FlutterNavigatorDelegate>

@property (retain, nonatomic) MMFlutterInstance *flutterInstance;
@property (weak, nonatomic) UIViewController *flutterViewController;
@property (nonatomic) int mUseFlutterExpt;
@property (nonatomic) int latestNotifyCode;
@property (nonatomic) BOOL m_bShouldNotInterruption;
@property (nonatomic) BOOL mIsOfflineEmigrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isKeepScreenOn;
+ (void)setKeepScreenOn:(BOOL)a0;

- (id)init;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (id)getFlutterInstacne;
- (id)getMigrateManager;
- (void)uninitMigrateManager;
- (void)resetFlutterStatus;
- (void)reInit:(id)a0 cachePath:(id)a1;
- (void)showSelectMigrateTypeUI;
- (void)showExportToPcOnDemand:(id)a0 ContactName:(id)a1 NickName:(id)a2 CreateTime:(unsigned long long)a3;
- (void)showTaskDetailPageByRespone:(id)a0;
- (void)showTaskDetailPageByOfflineRespone:(id)a0;
- (void)showTaskDetailPageWithoutParms;
- (void)showGuestEntryPage:(id)a0;
- (BOOL)canStartByUrl;
- (void)releaseFlutterInstance;
- (BOOL)useFlutterExpt;
- (id)getMmkv;
- (BOOL)useOfflineFlutterExpt;
- (BOOL)isLogout;
- (BOOL)isOfflineEmigrateFlutterVcShowing;
- (void)setEnterScene:(int)a0;
- (void)pushFromViewController:(id)a0 plugin:(id)a1 route:(id)a2 arguments:(id)a3;
- (BOOL)canStopByPcNotify;
- (BOOL)isDataProcessing;
- (void)onNewSyncCloseMigration:(id)a0;
- (void)onNewSyncPauseMigration:(id)a0;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (BOOL)isFlutterViewControllerOnTop;
- (void).cxx_destruct;

@end
