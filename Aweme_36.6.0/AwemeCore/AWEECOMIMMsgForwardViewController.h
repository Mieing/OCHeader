@class NSString, AWEECOMIMMsgForwardBiz, DUXVacantView, AWEECOMIMSearchBar, AWEECOMIMPageTrackUtil, UITableView;

@interface AWEECOMIMMsgForwardViewController : AWEECOMIMPanPresentViewController <AWECommonSearchBarDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEECOMIMSearchBar *searchBar;
@property (retain, nonatomic) AWEECOMIMMsgForwardBiz *biz;
@property (retain, nonatomic) UITableView *tableview;
@property (retain, nonatomic) DUXVacantView *vacantView;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (nonatomic) BOOL showAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParamsDict;
- (id)btmPageID;
- (id)initWithBiz:(id)a0;
- (void)configTracker;
- (void)p_closePage;
- (void)p_resetSearchEmptyState;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (id)pageName;

@end
