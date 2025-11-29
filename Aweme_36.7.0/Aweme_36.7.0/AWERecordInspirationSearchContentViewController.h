@class ACCAnimatedButton, NSString, AWECommonSearchBar, AWERecorderViewController, AWEVideoPublishViewModel, AWERecordInspirationSearchRecommendsView, AWERecordInspirationCommonSearchHistoryView, AWERecordInspirationCommonSearchResultView, NSObject, DUXButton, NSDictionary, AWERecordInspirationSearchNoNetworkView;
@protocol ACCInpsirationTransitionProtocol;

@interface AWERecordInspirationSearchContentViewController : UIViewController <AWECommonSearchBarDelegate, UITextFieldDelegate, ACCZoomContextOutterProviderProtocol, AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) AWERecorderViewController *recorderViewController;
@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (retain, nonatomic) DUXButton *searchButton;
@property (retain, nonatomic) AWERecordInspirationSearchNoNetworkView *searchNoNetworkView;
@property (retain, nonatomic) AWERecordInspirationSearchRecommendsView *searchRecommendsView;
@property (retain, nonatomic) AWERecordInspirationCommonSearchHistoryView *searchHistoryView;
@property (retain, nonatomic) AWERecordInspirationCommonSearchResultView *searchResultView;
@property (retain, nonatomic) NSString *searchMethod;
@property (weak, nonatomic) NSObject<ACCInpsirationTransitionProtocol> *inspirationTransitionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)onThemeChanged;
- (id)disableEmoji:(id)a0;
- (void)setupNavUI;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void)removeRecommendPageViewAndResignFirstResponderIfNeeded;
- (id)initWithPublishViewModel:(id)a0 recorderViewController:(id)a1 tabName:(id)a2;
- (void)updateHistoryViewHiddenIfNeeded;
- (void)setupHistoryUI;
- (void)clickSearchAction;
- (BOOL)isNetworkReachableStatus;
- (void)removeRecommendsPageView;
- (BOOL)isAllWhitespaceStatus:(id)a0;
- (void)searchRecommendsViewSelectAction:(id)a0;
- (void)removeSearchResultPageView;
- (void)trackHistoryTagsAction;
- (void)removeNoNetworkPageView;
- (void)addNoNetworkPageView;
- (void)addSearchResultPageView;
- (void)addRecommendsPageView;
- (void)clickBackAction;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)didReceiveMemoryWarning;
- (long long)preferredStatusBarStyle;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
