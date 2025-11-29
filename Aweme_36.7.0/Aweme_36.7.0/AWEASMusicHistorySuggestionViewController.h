@class AWEASMusicHistorySuggestionManager, UITableView, NSString, NSMutableDictionary, AWEASDiscoverSuggestionManager;

@interface AWEASMusicHistorySuggestionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, AWEASMusicDiscoverSuggestionTableViewCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEASMusicHistorySuggestionManager *dataManager;
@property (retain, nonatomic) AWEASDiscoverSuggestionManager *discoverDataManager;
@property (nonatomic) unsigned long long suggestionType;
@property (nonatomic) BOOL isUnFold;
@property (nonatomic) BOOL isPersonalRecommendSwitchOn;
@property (nonatomic) BOOL abEnabled;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ didSelectHistoryQuery;
@property (copy, nonatomic) id /* block */ didSelectDiscoveryQuery;
@property (copy, nonatomic) id /* block */ dismissKeyboard;
@property (copy, nonatomic) id /* block */ dismissHistoryViewBlock;
@property (retain, nonatomic) NSMutableDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadData;
- (void)discoverSuggestionTableViewCell:(id)a0 didSelectedWithTitle:(id)a1 Index:(long long)a2;
- (void)p_setupBackgroundUI;
- (BOOL)p_isNeedShowDiscover;
- (void)p_historyWordsShowTrack:(BOOL)a0;
- (void)p_historyWordFooterClicked:(BOOL)a0;
- (BOOL)shouldShowFindMoreMusicCell;
- (void)p_historyWordCellClicked:(BOOL)a0 Order:(long long)a1;
- (double)p_heightForTableViewFooter;
- (id)p_discoverCellDataList;
- (id)p_tableViewSectionFooter;
- (id)p_wordModelWithIndex:(long long)a0;
- (id)p_unfoldHistoryFooter;
- (id)p_clearHistoryFooter;
- (void)handleClickClearHistoryFooter:(id)a0;
- (void)handleClickUnfoldHistoryFooter:(id)a0;
- (id)p_createdHistoryWordBaseTrackParams:(id)a0;
- (long long)historySearchEntryCount;
- (void)historyViewControllerWillDismiss;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reset;
- (id)initWithSuggestionType:(unsigned long long)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
