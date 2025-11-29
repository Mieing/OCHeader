@class ACCSlidingTabbarView, NSString, ACCSlidingViewController, ACCAnimatedButton;
@protocol ACCAIGCWaterfallTabContentProviderProtocol;

@interface ACCAIGCSlidingTabViewController : UIViewController <ACCSlidingViewControllerDelegate, ACCAIGCSlidingTabViewControllerProtocol>

@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (weak, nonatomic) ACCAnimatedButton *closeButton;
@property (weak, nonatomic) ACCAnimatedButton *createButton;
@property (retain, nonatomic) id<ACCAIGCWaterfallTabContentProviderProtocol> contentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (double)getSlidingTabViewWidth;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
