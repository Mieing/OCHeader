@class UIView, NSString, NSArray, AWEIMMultiTabShareSingleListViewController, AWEIMHalfScreenContainerViewController, UIButton, AWEIMSearchView, NSMutableArray, AWEIMMultiTabShareListContext, NSObject, AWESlidingTabbarView, AWESlidingViewController;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEIMMultiTabShareListViewController : UIViewController <UITextFieldDelegate, AWEIMSearchBarDelegate, AWESlidingViewControllerDelegate, AWEIMMultiTabShareSingleListViewControllerDelegate, AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager;
@property (retain, nonatomic) NSMutableArray *followingsUser;
@property (nonatomic) BOOL textFieldIsFirstResponsder;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWEIMMultiTabShareListContext *context;
@property (copy, nonatomic) NSArray *tabNameArray;
@property (retain, nonatomic) AWEIMSearchView *searchView;
@property (retain, nonatomic) UIButton *cancleBtn;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) AWESlidingViewController *slidingVC;
@property (retain, nonatomic) AWEIMMultiTabShareSingleListViewController *singleVC;
@property (retain, nonatomic) AWEIMMultiTabShareSingleListViewController *searchVC;
@property (retain, nonatomic) AWESlidingTabbarView *tabbarView;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *halfVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)externalAssignTopDragHeight;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)tableViewWillBeginDragging:(id)a0;
- (void)p_cancleBtnClicked;
- (void)p_handleKeyboardShowNoti:(id)a0;
- (id)p_getTabName;
- (void)p_setupSearch;
- (void)p_close;
- (void)p_updateSearchViewAndCancleBtnLayout;
- (void)p_shouldShowSearchView:(BOOL)a0;
- (id)p_getSingleListViewControllerWithType:(long long)a0;
- (void)p_searchWithText:(id)a0;
- (void)clearBtnDidClicked:(id)a0;
- (double)searchIconLeftInsetForSearchBar:(id)a0;
- (double)textFieldLeftInsetForSearchBar:(id)a0;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })screenSize;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)loadView;
- (void)textFieldDidChange:(id)a0;
- (void)p_addObservers;

@end
