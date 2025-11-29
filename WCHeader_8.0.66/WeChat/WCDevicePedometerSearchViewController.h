@class NSMutableArray, NSString, NSMutableSet, UIView, UILabel, MMTableView;
@protocol IWCDevicePedometerSearchViewControllerExt, NSObject;

@interface WCDevicePedometerSearchViewController : MMUIViewController <IWCDeviceBrandMgrExt, UITableViewDelegate, UITableViewDataSource> {
    UIView *m_footerView;
    UILabel *m_linkHelpBlackLabel;
    UILabel *m_linkHelpBluelabel;
    NSMutableSet *m_deivceDidSet;
    NSMutableArray *m_devicesFound;
}

@property (retain, nonatomic) MMTableView *m_tableView;
@property (weak, nonatomic) id<NSObject, IWCDevicePedometerSearchViewControllerExt> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)getDevicesInDB;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)updateFooterViewSize;
- (void)updateFooterViewLocate:(id)a0;
- (void)reloadTableData;
- (void)showLinkHelp:(id)a0;
- (void)showLinkHelp;
- (void)onCancel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)makeSearchingCell:(id)a0;
- (void)makeHeaderView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onWCDeviceFound:(long long)a0 canHandled:(BOOL *)a1;
- (void)onBLEHardDeviceSearch:(id)a0 modContact:(id)a1 respData:(id)a2 errorCode:(int)a3;
- (void)onWCDeviceBindEnd:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
