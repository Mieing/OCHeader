@class IESECShopSearchSuggestManager, IESECTracker, NSString, IESECShopSearchNavView, NSDictionary, IESECShopSearchSuggestViewController, UIViewController, IESECShopSearchSuggestResponse, IESECShopSearchContext;
@protocol IESECShopSearchGuideViewControllerProtocol, IESECShopSearchResultVCProtocol;

@interface IESECShopSearchViewController : UIViewController <IESECShopSearchNavViewDelegate, IESECShopSearchGuideViewControllerDelegate, IESECShopSearchSuggestViewControllerDelegate> {
    UIViewController *_currentChildViewController;
    BOOL _searchFromSuggestions;
    double _suggestionGapStartTime;
    double _suggestionTimeElapsed;
    unsigned long long _suggestEnterType;
    BOOL _hasSearched;
    IESECShopSearchSuggestResponse *_suggestResponse;
    BOOL _hasPassedLandingPage;
    BOOL _isAppeared;
    UIViewController *_lazyAppearViewController;
    BOOL _willFirstHotWordLoad;
    BOOL _isFirstHotWordLoad;
    BOOL _isGuideFirstDisplay;
    BOOL _isResultFirstDisplay;
}

@property (retain, nonatomic) IESECShopSearchContext *searchContext;
@property (retain, nonatomic) IESECShopSearchNavView *navView;
@property (retain, nonatomic) UIViewController<IESECShopSearchGuideViewControllerProtocol> *guideViewController;
@property (retain, nonatomic) UIViewController<IESECShopSearchResultVCProtocol> *resultViewController;
@property (retain, nonatomic) IESECShopSearchSuggestViewController *suggestViewController;
@property (retain, nonatomic) IESECShopSearchSuggestManager *suggestManager;
@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) BOOL isSearchMiddlePage;
@property (nonatomic) BOOL allowAppearTracker;
@property (copy, nonatomic) NSDictionary *searchTrackDic;
@property (copy, nonatomic) NSDictionary *enterSearchBTMInfo;
@property (nonatomic) long long productTabStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adTracker;
- (BOOL)ttHideNavigationBar;
- (id)initWithSearchContext:(id)a0;
- (BOOL)enableSearchGlideOpt;
- (void)searchGuideViewController:(id)a0 didReloadHotWordArray:(id)a1;
- (void)searchGuideViewController:(id)a0 didSelectSearchWord:(id)a1 atIndex:(long long)a2 searchType:(unsigned long long)a3;
- (void)searchGuideViewController:(id)a0 didSelectSearchWord:(id)a1 atIndex:(long long)a2 searchType:(unsigned long long)a3 searchHotWordType:(unsigned long long)a4;
- (void)fetchHotWords;
- (void)searchGoodsByKey:(id)a0 isDefault:(BOOL)a1;
- (void)searchNav:(id)a0 textDidChange:(id)a1;
- (void)searchNavTextDidBeginEditing:(id)a0;
- (void)searchSuggestViewController:(id)a0 didDisplaySuggestion:(id)a1 atIndex:(long long)a2;
- (void)searchSuggestViewControllerDidScroll:(id)a0;
- (void)searchSuggestViewController:(id)a0 didSelectSuggestion:(id)a1 atIndex:(long long)a2;
- (void)searchSuggestViewController:(id)a0 didPopulateSuggestion:(id)a1 atIndex:(long long)a2;
- (void)searchKeywordFromRouter;
- (void)switchChildViewController:(id)a0;
- (id)p_topSearchWord;
- (void)updateSearchSuggestionsWithKeyWord:(id)a0;
- (void)fetchSearchSuggestWordsWithKeyWord:(id)a0;
- (void)backToGuideView;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (void)setPlaceholder:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchForWord:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)backButtonTapped;

@end
