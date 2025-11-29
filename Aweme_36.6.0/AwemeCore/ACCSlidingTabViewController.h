@class ACCSlidingTabbarView, NSString, ACCSlidingViewController, ACCOneKeyMvEntranceViewController;
@protocol ACCWaterfallTabContentProviderProtocol;

@interface ACCSlidingTabViewController : UIViewController <ACCSlidingViewControllerDelegate, ACCSlidingTabViewControllerProtocol>

@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCOneKeyMvEntranceViewController *oneKeyMvViewController;
@property (retain, nonatomic) id<ACCWaterfallTabContentProviderProtocol> contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)registerOneKeyButton:(id)a0 finalY:(double)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
