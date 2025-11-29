@class MMLoadingView, NSString, WCDeviceSearchLogic, WCDevice, UILabel, NSMutableArray, MMTableView;

@interface WCDeviceSearchViewController : MMUIViewController <WCDeviceSearchLogicDelegate, IWCDeviceBrandMgrExt, ILinkEventExt, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    UILabel *m_headerLbl;
    MMLoadingView *m_loadingView;
    NSMutableArray *m_deviceList;
    unsigned long long m_scene;
    WCDeviceSearchLogic *m_searchLogic;
    WCDevice *m_fliterDevice;
    BOOL isViewFirstLoaded;
}

@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDevice:(id)a0 scene:(unsigned long long)a1;
- (id)initWithScene:(unsigned long long)a0;
- (void)startScan;
- (BOOL)isWifiConnected;
- (BOOL)isBLEConnected;
- (void)reloadData;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)initLoadingView;
- (void)getLoadingCell:(id)a0;
- (id)getFooterSettingRichTextView;
- (void)onBack:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)jumpToDeviceBrandContactProfile:(id)a0;
- (void)onDeviceFound:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onHelpBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
