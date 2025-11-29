@class NSString, NSArray, UITableView;

@interface WCLabSettingViewControllerNew : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCLabSettingFooterViewDelegate> {
    NSArray *_onlineLabsItems;
    NSArray *_offlineLabsItems;
    UITableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSortedOnlineLabsItems:(id)a0 OfflineLabItems:(id)a1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onClickProtoButton:(id)a0;
- (id)itemAtSection:(long long)a0 row:(long long)a1;
- (void)initTableView;
- (void).cxx_destruct;

@end
