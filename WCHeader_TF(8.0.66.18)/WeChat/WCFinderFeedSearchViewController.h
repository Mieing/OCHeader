@class WCFinderFeedFlowView, NSString, NSMutableSet, WCFinderFeedSearchViewModel, UIView, FavTagSearchFilter;

@interface WCFinderFeedSearchViewController : WCSearchViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedSearchViewModelDelegate, UITextFieldDelegate, FavTagSearchFilterDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) WCFinderFeedSearchViewModel *viewModel;
@property (retain, nonatomic) NSString *latestTagText;
@property (retain, nonatomic) NSString *latestQueryText;
@property (retain, nonatomic) NSString *searchSessionID;
@property (retain, nonatomic) NSMutableSet *exposedTags;
@property (retain, nonatomic) UIView *guideContentView;
@property (retain, nonatomic) FavTagSearchFilter *tagFilterView;
@property (retain, nonatomic) WCFinderFeedFlowView *resultFeedFlowView;
@property (nonatomic) unsigned long long searchScene;
@property (nonatomic) int commentScene;
@property (nonatomic) int interactionScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)loadAndFetchFavTopicData;
- (void)viewDidLayoutSubviews;
- (void)relayoutSubviews;
- (void)onFavTopicDataChanged;
- (void)exposeTagsReport;
- (void)onFeedSearchDataChanged;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewDidBePresented:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tryDoSearch;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 customCellAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (BOOL)finderFeedFlowView:(id)a0 isCustomCellAtIndexPath:(id)a1;
- (double)finderFeedFlowView:(id)a0 heightForCustomCellAtIndexPath:(id)a1 itemWidth:(double)a2;
- (void)finderFeedFlowView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)selectTag:(id)a0 fromFilter:(id)a1;
- (void)deselectTag:(id)a0 fromFilter:(id)a1;
- (void)onUpdateTag:(id)a0 to:(id)a1 fromFilter:(id)a2;
- (void)updateSearchFieldText;
- (void)onClickCoverContact:(id)a0 dataItem:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)resetTypingAttributes;
- (void).cxx_destruct;

@end
