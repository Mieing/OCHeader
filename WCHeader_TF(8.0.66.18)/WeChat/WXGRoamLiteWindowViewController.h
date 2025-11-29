@class UIView, UIScrollView, UINavigationItem, UIBarButtonItem, MMProgressView, UIImageView, UIButton, AffRoamTransferStats, NSString, UILabel, MMUIActivityIndicatorView;

@interface WXGRoamLiteWindowViewController : MMWindowViewController <IRoamBackupPackageServiceExt> {
    double _topOffset;
    BOOL _isVisible;
    unsigned long long _chatlogSize;
}

@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) UIBarButtonItem *leftBackBtn;
@property (retain, nonatomic) UIBarButtonItem *rightCollapseBtn;
@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIView *titleRow;
@property (retain, nonatomic) UIView *statusRow;
@property (retain, nonatomic) UIImageView *deviceIcon;
@property (retain, nonatomic) UILabel *packageTitle;
@property (retain, nonatomic) UIImageView *statusImage;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *statusTitle;
@property (retain, nonatomic) UILabel *statusTips;
@property (retain, nonatomic) MMProgressView *progressBar;
@property (retain, nonatomic) UIButton *greenBtn;
@property (retain, nonatomic) UIButton *greyBtn;
@property (retain, nonatomic) UIButton *linkBtn;
@property (retain, nonatomic) AffRoamTransferStats *stat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupNavBar;
- (void)setupViews;
- (void)setupTitleRowView;
- (void)setupMainContentView;
- (void)updateNavBar:(unsigned long long)a0;
- (void)updateStatusImage:(unsigned long long)a0;
- (void)updateStatusTitleAndTips:(id)a0;
- (void)updateProgressBar:(unsigned long long)a0 refreshLayout:(BOOL)a1;
- (void)updateButton:(id)a0;
- (void)updateView;
- (void)collapseWindow;
- (void)closeWindowAndNotifyPc;
- (void)startBackupTask;
- (void)startRestoreAll;
- (void)startRestoreSelected;
- (void)stopTask;
- (void)cancelPrepare;
- (void)resumeTask;
- (void)showCheckConnectionBottomSheet;
- (void)notifyStopFromError;
- (void)updateBannerByNotifyCode:(unsigned long long)a0;
- (void)updateBannerByStats:(unsigned long long)a0 stats:(id)a1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)a0 notifyCode:(unsigned long long)a1;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)a0 stats:(id)a1;
- (void)onRoamBackupPackageServiceGetChatLogSize:(unsigned long long)a0 ofPackage:(unsigned long long)a1;
- (void)onRoamLiteStopAllTask;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(BOOL)a0;
- (void).cxx_destruct;

@end
