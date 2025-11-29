@class UIScrollView, WXGRoamBackupPackageDetailCell, NSString;

@interface WXGRoamBackupPackageManagerViewController : MMUIViewController <IRoamBackupPackageServiceExt, ILinkDeviceExt>

@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *sizeCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *rangeCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *nameCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *recordCell;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *deviceCell;
@property (retain, nonatomic) UIScrollView *sheetView;
@property (nonatomic) BOOL isDeleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupViews;
- (BOOL)isNeedToShowToast:(BOOL)a0;
- (void)updateView;
- (void)updateSize;
- (void)updateDeviceView;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)a0 notifyCode:(unsigned long long)a1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)a0;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)a0;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)a0 current:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onILinkDeviceUpdate:(id)a0;
- (void).cxx_destruct;

@end
