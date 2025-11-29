@class AWEFansPushForwardDataController, NSString, UILabel, UITableView;

@interface AWEFansPushForwardViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEFansPushForwardDataController *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *loadMoreFooterLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)p_loadMoreData;
- (void)p_backBtnClicked:(id)a0;
- (void)p_refreshData:(id /* block */)a0;
- (void)trackClickFowardCellAvaterAreaWithModel:(id)a0;
- (void)p_enterProfileWith:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
