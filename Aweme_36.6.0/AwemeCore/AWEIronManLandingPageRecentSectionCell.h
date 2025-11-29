@class AWEIronManLandingPageRecentlyUsedViewModel, AWEIronManLandingPageRecentListHeaderView, NSString, AWEIronManLandingPageDataEmptyView, UITableView;
@protocol AWEIronManLandingPageRecentSectionCellDelegate;

@interface AWEIronManLandingPageRecentSectionCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *listTableView;
@property (retain, nonatomic) AWEIronManLandingPageDataEmptyView *emptyView;
@property (retain, nonatomic) AWEIronManLandingPageRecentListHeaderView *headerView;
@property (weak, nonatomic) id<AWEIronManLandingPageRecentSectionCellDelegate> delegate;
@property (retain, nonatomic) AWEIronManLandingPageRecentlyUsedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackModuleShow;
- (void)trackItemShowWithItemModel:(id)a0 event:(id)a1 extra:(id)a2;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)showPopoverMenuWithIndex:(long long)a0;
- (void)trackModuleClick:(id)a0 index:(long long)a1;
- (void)trackUserClickDeleteEventWithItemModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)addObserver;
- (void)setUpUI;

@end
