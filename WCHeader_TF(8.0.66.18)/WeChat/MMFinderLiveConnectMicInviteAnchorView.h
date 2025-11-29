@class NSMutableDictionary, MMFinderLiveConnectMicAnchorContainerReporterExtInfo, UILabel, MMFinderLiveTaskId, MMUISearchBar, NSDictionary, MMFinderLiveConnectMicRandomHintTableFooterView, NSMutableArray, UIView, NSString, MMTableView, MMUIActivityIndicatorView, NSArray;
@protocol MMFinderLiveConnectMicInviteAnchorViewDelegate;

@interface MMFinderLiveConnectMicInviteAnchorView : MMPageSheetBaseView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveConnectMicRandomHintTableFooterViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *searchBarContainer;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMFinderLiveConnectMicRandomHintTableFooterView *footerView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSArray *connectMicAuchorUserList;
@property (retain, nonatomic) NSDictionary *connectMicAuchorUserDict;
@property (retain, nonatomic) NSMutableArray *candicateAnchorUserInfoList;
@property (retain, nonatomic) NSString *curSearchText;
@property (retain, nonatomic) NSMutableArray *displaySearchUserInfoList;
@property (nonatomic) BOOL footerViewHasBeenExposed;
@property (retain, nonatomic) NSMutableDictionary *candicateReportDic;
@property (retain, nonatomic) NSMutableDictionary *searchReportDic;
@property (retain, nonatomic) MMFinderLiveConnectMicAnchorContainerReporterExtInfo *anchorContainerReporterExtInfo;
@property (weak, nonatomic) id<MMFinderLiveConnectMicInviteAnchorViewDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupPageSheetConfig;
- (void)layoutContentView;
- (void)layoutSearchBar;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutTableView;
- (void)checkFooterViewExposedAndReport;
- (void)showTipsLabelWithTips:(id)a0 topAreaHeight:(double)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)updateWithConnectMicAuchorUserList:(id)a0 candicateAnchorList:(id)a1;
- (void)updateAnchorContainerReporterExtInfo:(id)a0;
- (void)tryActiveSearch;
- (void)onCancelSearch;
- (void)doSearchWithText:(id)a0;
- (void)onBeginSearchFromService;
- (void)onSearchResultReturnWithSearchText:(id)a0 resultArray:(id)a1;
- (BOOL)isOnSearching;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)a0;
- (void)onRandomMicHintTableFooterViewActionInvoked:(id)a0;
- (void)updateDicWithIndexPath:(id)a0;
- (void)onReporterBegin;
- (void)onReporterEnd;
- (void)reportWithType:(unsigned long long)a0 reportParams:(id)a1;
- (void).cxx_destruct;

@end
