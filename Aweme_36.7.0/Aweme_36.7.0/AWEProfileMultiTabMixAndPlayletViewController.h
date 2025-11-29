@class NSArray, AWESlidingViewController, AWESlidingTabbarView, NSString;

@interface AWEProfileMultiTabMixAndPlayletViewController : UIViewController <AWESlidingViewControllerDelegate>

@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (copy, nonatomic) NSArray *controllers;
@property (copy, nonatomic) NSArray *titlesArray;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)backBtnClicked;
- (void)configureUI;
- (void)configNavigationBar;
- (void)configureSlidingViewController;
- (void)didChangedLanguage;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (id)initWithControllers:(id)a0;

@end
