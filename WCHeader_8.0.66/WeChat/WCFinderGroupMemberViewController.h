@class WCFinderAnimationLoadingView, WCFinderRefreshTableFooterView, WCFinderGroupMemberViewModel, NSString, UILabel, UITableView;

@interface WCFinderGroupMemberViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) WCFinderGroupMemberViewModel *viewModel;
@property (weak, nonatomic) UILabel *headerTitleLabel;
@property (weak, nonatomic) UILabel *headerViewTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderContact:(id)a0;
- (void)viewDidLoad;
- (void)updateTitleCount:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void).cxx_destruct;

@end
