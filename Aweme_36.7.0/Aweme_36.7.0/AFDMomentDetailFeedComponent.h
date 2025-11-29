@class NSString, UIViewController;
@protocol AWEStoryFeedViewControllerProtocol;

@interface AFDMomentDetailFeedComponent : AFDMomentDetailBaseComponent <AWEStoryFeedViewControllerDelegate, AFDMomentDetailFeedInterface>

@property (retain, nonatomic) UIViewController<AWEStoryFeedViewControllerProtocol> *feedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapCloseBtn;
- (void)tapCameraBtn;
- (void)syncFeedDirectlyPresentingVC;
- (BOOL)transitionEnabledWithIsInteractive:(BOOL)a0;
- (void)loadComponent;
- (void)componentDidLoad;
- (void)componentDidDisappear:(BOOL)a0;
- (void)resetToTopAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (id)contentScrollView;
- (id)context;

@end
