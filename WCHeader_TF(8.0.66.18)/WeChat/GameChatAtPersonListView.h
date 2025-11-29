@class NSString, NSArray, MMUISearchBar, MMTimer, UIView, GameChatAtPersonListViewModel, MMTableView;
@protocol GameChatAtPersonListViewDelegate;

@interface GameChatAtPersonListView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, GCAtPersonListViewModelViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UIView *searchBarContainer;
@property (nonatomic) BOOL isSearching;
@property (copy, nonatomic) NSArray *searchResultArray;
@property (retain, nonatomic) MMTimer *atAllCheckTimer;
@property (weak, nonatomic) GameChatAtPersonListViewModel *viewModel;
@property (weak, nonatomic) id<GameChatAtPersonListViewDelegate> delegate;
@property (copy, nonatomic) NSString *chatroomName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (id)makeBackButton;
- (void)setupUI;
- (void)dealloc;
- (void)reloadListView;
- (void)initTableView;
- (void)initSearchBar;
- (void)didClickAtLeftNavButton;
- (unsigned long long)getSectionType:(long long)a0;
- (void)showWithAnimation;
- (void)reportDataWithPositionId:(unsigned long long)a0 op:(unsigned long long)a1 userName:(id)a2;
- (void)reportCell:(id)a0 withAction:(unsigned long long)a1;
- (void)makeGroupCell:(id)a0 byModel:(id)a1;
- (void)makeGroupCell:(id)a0 url:(id)a1 title:(id)a2;
- (void)makeMoreMemberCell:(id)a0;
- (void)makeAtAllCell:(id)a0 byModel:(id)a1;
- (void)onAtAllTimerCheck;
- (id)createContactsItemViewInCell:(id)a0;
- (id)atModelAtIndexPath:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)reloadWhenCancelSearch;
- (void)reloadWhenSearchChange;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
