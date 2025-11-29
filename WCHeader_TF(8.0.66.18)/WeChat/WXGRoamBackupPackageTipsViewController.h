@class NSString, UIImageView, NSURL, UILabel, UIScrollView, UIButton;

@interface WXGRoamBackupPackageTipsViewController : MMUIViewController <IOnlineClientMgrExt, IRoamOutBoxServiceExt, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *mainIcon;
@property (retain, nonatomic) UIButton *bottomButton;
@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) NSURL *dirURL;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) unsigned long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterScene:(unsigned long long)a0;
- (id)navigationBarBackgroundColor;
- (void)initViewWithLeftNavStyle:(unsigned long long)a0 IconName:(id)a1 iconColor:(id)a2 title:(id)a3 subTitle:(id)a4 buttonType:(unsigned long long)a5 buttonTitle:(id)a6 buttonSEL:(SEL)a7;
- (void)setupDotTipsView;
- (void)setupSubViewWith:(id)a0;
- (void)setupComputerRegisterTipsViewWithName:(id)a0;
- (void)onCancel;
- (void)onScan;
- (void)onShowOutBoxSelect;
- (void)onShowOutBoxCheckPermission;
- (void)onOutBoxSelectSuccess;
- (void)onStartRegisterComputer;
- (void)onLoginWeb;
- (void)onOnlineInfoUpdated;
- (void)onRoamBackupPackageServiceBindTicketComplete:(BOOL)a0;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)a0 dirURL:(id)a1 deviceId:(id)a2;
- (void).cxx_destruct;

@end
