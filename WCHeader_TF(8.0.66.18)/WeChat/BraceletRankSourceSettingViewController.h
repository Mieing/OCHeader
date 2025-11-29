@class NSString, NSMutableArray, MMTableView;

@interface BraceletRankSourceSettingViewController : MMUIViewController <IWCDeviceBrandMgrExt, UITableViewDelegate, UITableViewDataSource, IWCDevicePedometerSearchViewControllerExt> {
    NSMutableArray *m_DataSourcList;
    struct map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> { struct __tree<std::__value_type<unsigned long, unsigned int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned int>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned int>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned int>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapSectionType;
    NSMutableArray *m_RowDataList;
    MMTableView *m_tableView;
    NSString *m_nsDataSourceFaqURL;
    NSString *m_nsWatchDataSourceFaqURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)resetSection;
- (void)updateTableSectionWithStepOnState:(BOOL)a0;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)makeAddPedometerCell:(id)a0;
- (void)reloadTableData;
- (void)getTitle:(id *)a0 detail:(id *)a1 atIndex:(long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onGetSportDeviceListEnd:(id)a0 DataSourceFaqURL:(id)a1 WatchDataSourceFaqURL:(id)a2 ErrorCode:(int)a3;
- (id)makeMockM7Device;
- (id)makeMockAppleWatchDevice;
- (BOOL)isM7Device:(id)a0;
- (void)onAddSportDevice:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
