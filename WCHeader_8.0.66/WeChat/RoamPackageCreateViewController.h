@class RoamPackageCreateHeaderCell, NSMutableDictionary, NSRecursiveLock, WCDevice, NSString, NSMutableArray, UITableView;

@interface RoamPackageCreateViewController : MMUIViewController <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt, ILinkDeviceExt, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *uiTableView;
@property (retain, nonatomic) RoamPackageCreateHeaderCell *uiHeaderCell;
@property (retain, nonatomic) NSMutableArray *backupDevices;
@property (retain, nonatomic) NSMutableDictionary *connectionByDeviceId;
@property (retain, nonatomic) NSRecursiveLock *connectionMapLock;
@property (retain, nonatomic) WCDevice *onlineDevice;
@property (nonatomic) BOOL needToBindCurrentOnlineDevice;
@property (nonatomic) BOOL hasBoundILinkDevice;
@property (nonatomic) BOOL bTapCreateToSendNotify;
@property (nonatomic) BOOL hasStartedCreate;
@property (nonatomic) int notifyResult;
@property (retain, nonatomic) NSString *report_session_id;
@property (nonatomic) BOOL emptyMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithScene:(int)a0;
- (void)viewDidLoad;
- (void)setupViews;
- (void)dealloc;
- (void)setupNavigator;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)loadDevices:(id)a0;
- (void)fetchDevicesFromServer;
- (void)loadDeviceConnection;
- (void)onILinkDeviceUpdate:(id)a0;
- (void)onILinkDeviceRequestFailed;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)getTableCellCount;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)updateDefaultData;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)addDeviceAction;
- (void)createPackage;
- (void)createPackageInner;
- (void)cancel;
- (void)onRoamBackupPackageServiceBindTicketComplete:(BOOL)a0;
- (void)onRoamBackupPackageServiceFinishCreatePackages:(int)a0;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void).cxx_destruct;

@end
