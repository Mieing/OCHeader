@class IESLiveFeedSearchBar, TabResponse, IESLiveFeedDrawerViewControllerContext, IESLiveSearchResultViewController, NSString, UIButton;

@interface IESLiveSearchViewController : UIViewController <UISearchBarDelegate, IESLiveSearchActions>

@property (retain, nonatomic) IESLiveFeedSearchBar *searchBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) IESLiveSearchResultViewController *searchResultViewController;
@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *feedDrawerContext;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) BOOL optimizeSearchDrawer;
@property (copy, nonatomic) id /* block */ cancelButtonTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)configureUI;
- (id)initWithTabModel:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithTabModel:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 feedDrawerContext:(id)a2;
- (void)refreshConstrains;
- (BOOL)isNewFeedDrawStyle;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)showKeyboard;
- (void)resignFirstResponder;
- (void)cancelSearch;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)setupActions;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)searchBar:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)cancelButtonTapped;

@end
