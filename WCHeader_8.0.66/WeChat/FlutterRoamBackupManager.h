@class MMFlutterInstance, NSString, WXGRoamBackupPackageRangeHandler, UIViewController;

@interface FlutterRoamBackupManager : NSObject <INewSyncExt, MMFlutterPlugin, WCMomentsContactTagListViewControllerDelegate, FlutterNavigatorDelegate, BackupPigeonApi>

@property (weak, nonatomic) UIViewController *flutterViewController;
@property (retain, nonatomic) WXGRoamBackupPackageRangeHandler *rangeHandler;
@property (copy, nonatomic) id /* block */ labelCompletion;
@property (nonatomic) int mUseFlutterExpt;
@property (copy, nonatomic) id /* block */ openCompletion;
@property (retain, nonatomic) MMFlutterInstance *flutterInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)getFlutterInstacne;
- (BOOL)roamBackupUseFlutterExpt;
- (void)showRoamBackupPackageListPage;
- (void)showRoamBackupCreatePackagePage:(id)a0;
- (void)showRoamBackupPackageDetailPage:(unsigned long long)a0;
- (void)showRoamBackupPackageDetailPageAndStartBackup:(unsigned long long)a0;
- (void)showRoamBackupPackageDetailPageAndStartRestore:(unsigned long long)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)openSAFDirTreeOfDeviceDeviceInfo:(id)a0 completion:(id /* block */)a1;
- (void)openSAFDirTreeWithCompletion:(id /* block */)a0;
- (void)selectConversationBylabelAlreadySelected:(id)a0 completion:(id /* block */)a1;
- (void)selectConversationByNameAlreadySelected:(id)a0 completion:(id /* block */)a1;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (void)contactTagListViewControllerCancelSelect:(id)a0;
- (void)pushFromViewController:(id)a0 plugin:(id)a1 route:(id)a2 arguments:(id)a3;
- (void)jumpToPrivacySetting;
- (void)jumpToBuildHostspot;
- (void)jumpToFeedback;
- (BOOL)isFlutterViewControllerOnTop;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)a0 dirURL:(id)a1 deviceId:(id)a2;
- (void).cxx_destruct;

@end
