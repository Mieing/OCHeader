@class IESLiveSearchMiddleViewController, NSString, IESLiveSearchResultFeedViewController, TabResponse, UISearchBar;

@interface IESLiveSearchResultViewController : UIViewController <IESLiveSearchMiddleProtocol>

@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) IESLiveSearchMiddleViewController *searchMiddleViewController;
@property (retain, nonatomic) IESLiveSearchResultFeedViewController *searchResultFeedViewController;
@property (retain, nonatomic) TabResponse *tabModel;
@property (weak, nonatomic) UISearchBar *searchBar;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)configureUI;
- (BOOL)isShowingMiddleView;
- (void)suggestWordComplementDidTapped:(id)a0;
- (id)initWithTabModel:(id)a0;
- (void)refreshConstrains;
- (void)historyWordDidTapped:(id)a0;
- (void)suggestWordDidTapped:(id)a0;
- (BOOL)haveResultDataShowing;
- (void)saveKeywordToHistory:(id)a0;
- (void)searchWithKeyword:(id)a0 enterMethod:(id)a1 defaultWord:(BOOL)a2;
- (void)searchWithKeyword:(id)a0 enterMethod:(id)a1;
- (void)showPlaceholderViewOrSugViewWithText:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
