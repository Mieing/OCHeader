@class AWEAwemeModel, NSString, NSArray, AWEPageContext, DUXTabBarContainerController, DUXTabBar, NSDictionary, UIViewController, UIScrollView;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayAiToTextPanelViewControllerDelegate;

@interface AWEPlayAiToTextMutliTabViewController : UIViewController <DUXTabBarContainerDelegate>

@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) DUXTabBar *tabView;
@property (nonatomic) long long currentIndex;
@property (weak, nonatomic) id<AWEPlayAiToTextPanelViewControllerDelegate> delegate;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) NSString *referString;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (nonatomic) double contentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (id)dux_titleForColoseButton;
- (void)dismissLoadingView;
- (id)makeTabItems;
- (void)trackVideoTitleWithAwemeType:(id)a0 actionType:(id)a1;
- (id)createPanelVCWithTypeName:(id)a0;
- (void)dismissPanleWithType:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)hideMenu;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
