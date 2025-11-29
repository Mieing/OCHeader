@class NSMutableArray, NSArray, MMUISearchBar, NSString, UILabel, UIView, MMTableView;
@protocol MMFinderLiveConnectedMicUserCellViewDelegate;

@interface MMFinderLiveConnectMicSearchAudienceView : MMPageSheetBaseView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *searchBarContainer;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSArray *micAudienceList;
@property (retain, nonatomic) NSMutableArray *filteredMicAudienceList;
@property (retain, nonatomic) NSString *currentSearchText;
@property (weak, nonatomic) id<MMFinderLiveConnectedMicUserCellViewDelegate> cellActionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupPageSheetConfig;
- (void)layoutContentView;
- (void)layoutSearchBar;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutTableView;
- (void)showTipsLabelWithTips:(id)a0 topAreaHeight:(double)a1;
- (void)updateWithConnectMicUserList:(id)a0;
- (void)updateConnectingUserList:(id)a0 invalidUserList:(id)a1;
- (void)tryActiveSearch;
- (void)onCancelSearch;
- (void)doSearchWithText:(id)a0;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
