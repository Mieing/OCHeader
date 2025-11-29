@class NSMutableArray, NSString, UILabel, DeviceRankDetailResonse, MMTableView;

@interface BraceletFocusListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BraceletSportRecordDelegate, IDeviceRankProfileMgrExt>

@property (retain, nonatomic) DeviceRankDetailResonse *detailResp;
@property (retain, nonatomic) NSMutableArray *arrFollowItems;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UILabel *noFocusTipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)reloadData;
- (void)initView;
- (void)onAddFocus:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 AtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onAddFollowWithFollowItems:(id)a0 error:(int)a1;
- (void)onDelFollowWithUserName:(id)a0 error:(int)a1;
- (void).cxx_destruct;

@end
