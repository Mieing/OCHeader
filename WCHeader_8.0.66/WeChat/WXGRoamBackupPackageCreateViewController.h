@class UISwitch, NSString, UIImageView, WXGRoamBackupPackageDetailCell, UIScrollView, UILabel, UIView;

@interface WXGRoamBackupPackageCreateViewController : MMUIViewController <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt> {
    double m_cellHeight;
}

@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) UIView *deviceView;
@property (retain, nonatomic) UILabel *deviceLable;
@property (retain, nonatomic) UIImageView *deviceIcon;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UIView *rangeView;
@property (retain, nonatomic) UILabel *rangeMainLabel;
@property (retain, nonatomic) UIView *rangeChooseView;
@property (retain, nonatomic) UIView *rangeExtraView;
@property (retain, nonatomic) UILabel *rangeTitle;
@property (retain, nonatomic) UIView *autoBackupView;
@property (retain, nonatomic) UIView *autoBackupExtraView;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *autoBackupCell;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UISwitch *lowPowerBtn;
@property (retain, nonatomic) UISwitch *autoBackupBtn;
@property (retain, nonatomic) UISwitch *mobileNetBtn;
@property (nonatomic) double deviceTitleWidth;
@property (nonatomic) BOOL bTapCreateToSendNotify;
@property (nonatomic) BOOL bTapToAddDevice;
@property (nonatomic) BOOL bNeedBind;
@property (nonatomic) int notifyResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(BOOL)a0;
- (void)getDefaultData;
- (void)setupViews;
- (void)updateDefaultData;
- (void)updateViews;
- (void)setupRangeExtraView;
- (void)setupNavBar;
- (void)onCancel;
- (void)switchMobileNet;
- (void)switchLowPower;
- (void)switchAutoBackup;
- (void)createBackupPackage;
- (void)createPackageInner;
- (void)onRoamBackupPackageServiceBindTicketComplete:(BOOL)a0;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)a0;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamBackupPackageServiceCreateViewModelChange;
- (void)onRoamBackupPackageServiceFinishedCulculateCurrentModel;
- (void)onRoamLiteStopAllTask;
- (void).cxx_destruct;

@end
