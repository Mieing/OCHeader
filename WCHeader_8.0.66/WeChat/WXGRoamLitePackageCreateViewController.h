@class UILabel, WCUIAlertView, UIImageView, NSString, UIScrollView, UINavigationItem, UIView;

@interface WXGRoamLitePackageCreateViewController : MMUIViewController <IRoamBackupPackageServiceExt> {
    double m_cellHeight;
}

@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) UIScrollView *sheetView;
@property (retain, nonatomic) UIView *deviceView;
@property (retain, nonatomic) UILabel *deviceLabel;
@property (retain, nonatomic) UIImageView *deviceIcon;
@property (retain, nonatomic) UIView *rangeView;
@property (retain, nonatomic) UILabel *rangeMainLabel;
@property (retain, nonatomic) UIView *rangeChooseView;
@property (retain, nonatomic) UIView *rangeExtraView;
@property (nonatomic) double deviceTitleWidth;
@property (nonatomic) int cgiResult;
@property (nonatomic) BOOL hasNotifyToPc;
@property (retain, nonatomic) WCUIAlertView *alertDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupNavBar;
- (void)setupViews;
- (void)updateDefaultData;
- (void)updateViews;
- (void)setupRangeExtraView;
- (void)onCancel;
- (void)createBackupPackage;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)a0;
- (void)onRoamBackupPackageServiceCreateViewModelChange;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamLiteStartBackup:(unsigned long long)a0;
- (void)onRoamLiteStopAllTask;
- (void).cxx_destruct;

@end
