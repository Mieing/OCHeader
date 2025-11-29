@class NSArray, AWESlidingViewController, AWESlidingTabbarView, UIView, AWERTVInteractionFunctionContext, NSString;
@protocol RxInjector, RTVInteractionController, RTVXRControllerInjector, AWERTVInteractionFunctionViewControllerDelegate;

@interface AWERTVInteractionFunctionViewController : UIViewController <AWESlidingViewControllerDelegate, RTVInteractionFunctionContentDelegate, RTVPageSheetViewControllerProtocol, RTVInteractionControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVInteractionController> interactionController;
@property (readonly, nonatomic) AWESlidingViewController *slidingViewController;
@property (readonly, nonatomic) AWESlidingTabbarView *tabView;
@property (readonly, copy, nonatomic) NSArray *dataSource;
@property (readonly, nonatomic) AWERTVInteractionFunctionContext *context;
@property (nonatomic) struct CGSize { double width; double height; } targetPreferredContentSize;
@property (retain, nonatomic) UIView *searchPanel;
@property (nonatomic) struct CGSize { double width; double height; } originContentSize;
@property (nonatomic) long long currentSelectedIndex;
@property (weak, nonatomic) id<AWERTVInteractionFunctionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (BOOL)canShowInnerPush;
- (void)willOpenChatViewControllerWithOpenChatBlock:(id /* block */)a0;
- (BOOL)needOpenFloatMessagePage;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (id)pullIndicatorViewBackgroundColor;
- (void)rxAwakeFromPropertyInjection;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)__createComponents;
- (void)__configComponents;
- (void)didChangeInteractionController:(id)a0 context:(id)a1;
- (id)aAWEPadRTVAdapter;
- (void)contentViewController:(id)a0 dismissSearchPanel:(id)a1;
- (void)contentViewController:(id)a0 showSearchPanel:(id)a1 updateContentSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)enableCloseButtonForPageSheetPresentation;
- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (void)renderWithModel:(id)a0 context:(id)a1;
- (void)__layoutComponnets;
- (void)__reloadComponents;
- (BOOL)useTopVCPreferredContentSize;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)updatePreferredContentSize:(struct CGSize { double x0; double x1; })a0;

@end
