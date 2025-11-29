@class MMUIActivityIndicatorView, UIView, NSString, MMProgressView, UIImageView, WXGRoamBackupPackageDetailCell, UIButton, MMUILabel, UILabel, UIScrollView;

@interface WXGRoamBackupPackageDetailViewController : MMUIViewController <IRoamBackupPackageServiceExt, ILinkDeviceExt> {
    MMProgressView *m_progressView;
    MMUILabel *m_progressLabel;
}

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *topNameView;
@property (retain, nonatomic) UIView *secondView;
@property (retain, nonatomic) UIView *blockView;
@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIButton *backupButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *runningView;
@property (retain, nonatomic) UIImageView *runningArrow;
@property (retain, nonatomic) UIImageView *runningIcon;
@property (retain, nonatomic) UILabel *runningLabel;
@property (retain, nonatomic) UILabel *backupTimeLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *runningIndicator;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *sizeCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *rangeCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *autobackupCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *viewBackupedCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *deviceCell;
@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) NSString *speedString;
@property (retain, nonatomic) NSString *leftTimeString;
@property (nonatomic) float backupProgress;
@property (nonatomic) unsigned long long curSpeed;
@property (nonatomic) unsigned long long speedCount;
@property (nonatomic) unsigned long long transferSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillPop:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupViews;
- (void)setupTopView;
- (void)setupTopNameView;
- (void)setupTopOtherView;
- (void)setupSecondView;
- (void)updateDeviceView;
- (BOOL)isNeedToShowToast:(BOOL)a0;
- (void)getTransferStats;
- (void)updateBackupView;
- (void)addProgressView;
- (void)updateSize;
- (void)updateView;
- (void)setupNavBar;
- (void)onDetail;
- (void)analysisStat:(id)a0;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)a0 notifyCode:(unsigned long long)a1;
- (void)onRoamBackupPackageServiceTaskTransferStatsChanged:(unsigned long long)a0 stats:(id)a1;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)a0 current:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)a0;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)a0;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)a0;
- (void)onILinkDeviceUpdate:(id)a0;
- (void).cxx_destruct;

@end
