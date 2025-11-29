@class MMLoadingView, NSString, UIView, NSMutableArray, UITableView;

@interface WXGRoamBackupPackageListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt> {
    double m_cellHeight;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITableView *sheetView;
@property (retain, nonatomic) NSMutableArray *cellHeightArr;
@property (nonatomic) BOOL bNeedScrollToDetailIndex;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)makeEmptyView;
- (void)addNavigationBarInfo;
- (void)addBackupPackage;
- (void)setupCellAndHeight:(id)a0 indexPath:(id)a1 width:(double)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onRoamBackupPackageServiceStartGetAllPackage;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)a0;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)a0;
- (void)onRoamBackupPackageServiceStopStart;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)a0 packageID:(unsigned long long)a1;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)a0 models:(id)a1;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)a0;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)a0 notifyCode:(unsigned long long)a1;
- (void)onRoamDeviceInfoUpdated:(id)a0;
- (void).cxx_destruct;

@end
