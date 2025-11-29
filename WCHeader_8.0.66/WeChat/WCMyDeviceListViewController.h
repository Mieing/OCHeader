@class MMLoadingView, NSString, WCDevice, NSMutableArray, MMTableView;

@interface WCMyDeviceListViewController : MMUIViewController <WCDeviceNetworkLogicMgrDelegate, IWCDeviceBrandMgrExt, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    NSMutableArray *m_myDeviceList;
    WCDevice *m_deviceToDeleted;
    MMLoadingView *m_loadingView;
    unsigned long long m_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithScene:(unsigned long long)a0;
- (void)requestDataFromDB;
- (void)reloadData;
- (void)initView;
- (void)initHeaderView;
- (void)initLoadingView;
- (void)updateView;
- (void)updateRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)makeAddDeviceCell:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onEditTableView:(id)a0;
- (void)onFinishedEditTableView:(id)a0;
- (void)onWCDeviceGetBoundDevices:(id)a0;
- (void)onWCDeviceUnbindEnd:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
