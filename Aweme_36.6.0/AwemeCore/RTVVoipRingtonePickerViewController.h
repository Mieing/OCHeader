@class AWEUILoadingView, UILabel, UIPageViewController, UINavigationController, NSDictionary, UIViewController, RTVVoipRingtonePickerViewModel, UIButton, UIView, IESSegmentedControl, NSString, UIStackView, RTVVoipRingtoneSearchViewController, NSArray, AWECommonSearchBar;

@interface RTVVoipRingtonePickerViewController : UIViewController <UIPageViewControllerDelegate, UIGestureRecognizerDelegate, UIPageViewControllerDataSource, AWECommonSearchBarDelegate, IESSegmentedControlDelegae>

@property (retain, nonatomic) RTVVoipRingtonePickerViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *panelContainerView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIStackView *searchStackView;
@property (retain, nonatomic) UIButton *searchBackButton;
@property (retain, nonatomic) AWECommonSearchBar *searchBar;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UINavigationController *contentContainerNavigationController;
@property (retain, nonatomic) UIViewController *contentContainerController;
@property (retain, nonatomic) UIPageViewController *contentContainerPageController;
@property (retain, nonatomic) IESSegmentedControl *segmentedControl;
@property (retain, nonatomic) NSArray *tabContentControllers;
@property (retain, nonatomic) RTVVoipRingtoneSearchViewController *searchViewController;
@property (nonatomic) unsigned long long searchStatus;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)segmentedControl:(id)a0 didChangeSelectedIndex:(long long)a1;
- (void)onCloseTapped;
- (void)setupContentViews;
- (double)contentContainerHeight;
- (void)backgroundViewTapped;
- (id)createSegmentedControl;
- (void)selectTabController:(id)a0 animated:(BOOL)a1;
- (void)tracePickerShow;
- (void)setupSearchViews;
- (void)onSearchBackTapped;
- (void)onSearchTapped;
- (void)onResetTapped;
- (void)setupContainerView;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)setupLayout;

@end
