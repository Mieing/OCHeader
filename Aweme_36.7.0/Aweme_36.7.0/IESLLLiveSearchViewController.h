@class LLCubeModel, IESLLLiveSearchResultViewController, IESLLLiveShelfPagingDataController, IESLLLiveShelfLoadingView, NSString, IESLLLiveSearchViewModel, IESLLLiveLynxView;

@interface IESLLLiveSearchViewController : UIViewController <LLCubeViewDelegate, IESLLLiveShelfSearchResultDelegate, IESLLLiveHalfScreenContentProtocol>

@property (retain, nonatomic) IESLLLiveShelfPagingDataController *dataController;
@property (retain, nonatomic) IESLLLiveSearchViewModel *viewModel;
@property (retain, nonatomic) IESLLLiveLynxView *searchBarView;
@property (retain, nonatomic) LLCubeModel *searchBarModel;
@property (retain, nonatomic) IESLLLiveLynxView *searchHistoryView;
@property (retain, nonatomic) LLCubeModel *searchHistoryModel;
@property (retain, nonatomic) IESLLLiveSearchResultViewController *searchResultVC;
@property (retain, nonatomic) IESLLLiveShelfLoadingView *loadingView;
@property (nonatomic) BOOL needDismissSearch;
@property (weak, nonatomic) id container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillCloseWithCloseType:(long long)a0;
- (BOOL)containerShouldShowMask;
- (void)embedInContainer:(id)a0;
- (void)setupLoadingView;
- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)handleLiveLifeSearchBack:(id)a0;
- (void)handleLiveLifeStartSearch:(id)a0;
- (void)liveShelfSearchResultLoadMore;
- (void)setupSearchHistory;
- (void)setupSearchResult;
- (id)getSearchPageParamsWithActionType:(unsigned long long)a0;
- (void)finishSearchWithModel:(id)a0 actionType:(unsigned long long)a1;
- (void)startSearchWithActionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupSearchBar;
- (void)dismissSearch;
- (BOOL)isShowingSearchResult;

@end
