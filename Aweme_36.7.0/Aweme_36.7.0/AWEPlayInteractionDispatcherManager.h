@class NSMutableDictionary, NSString, AWEPageContext, UIView, NSMutableArray, AWEPlayInteractionConfigsHelper;
@protocol AWEContainerProtocol;

@interface AWEPlayInteractionDispatcherManager : AWEShellControllerManager <AWEPlayInteractionPlayerLifeCycleProtocol, AWEPlayInteractionUILifeCycleProtocol, AWEPlayInteractionUIInfoProtocol, AWEPlayInteractionBizProtocol, AFDPlayInteractionRichContentExtension, AWEPlayInteractionControllerDispatchProtocol>

@property (retain, nonatomic) NSMutableArray *lazyControllerInstanceArray;
@property (retain, nonatomic) NSMutableDictionary *lazyCacheDict;
@property (weak, nonatomic) id<AWEContainerProtocol> container;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) AWEPageContext *context;
@property (nonatomic) BOOL isDispatcherReady;
@property (retain, nonatomic) NSMutableArray *lazyControllerRetryQueue;
@property (retain, nonatomic) AWEPlayInteractionConfigsHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isSlidingPorgressSlider;
@property (nonatomic) unsigned long long playerStatus;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEPadTabBarAdapterClass;
+ (Class)aAWEPlayInteractionDispatcherManagerAdapterClass;

- (id)classNameArray;
- (id)controllerArrayBySelector:(SEL)a0;
- (id)controllersByProtocol:(id)a0;
- (void)loadControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)updateRootView:(id)a0;
- (id)aAWEPadModuleAdapter;
- (BOOL)isLazyLoadWithControllerName:(id)a0;
- (void)loadLazyControllerWithName:(id)a0;
- (void)unloadLazyControllerWithName:(id)a0;
- (id)currentInfoForSubUnits;
- (id)currentInfoForUnitWithIdentifier:(id)a0;
- (id)currentInfoForUnitWithClassName:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (id)aAWEPadTabBarAdapter;
- (BOOL)isInteractionOptEnable;
- (id)controllerByClassName:(id)a0;
- (id)allControllers;
- (BOOL)enableAIPublishVideoInteractionController;
- (id)p_classNameArray;
- (id)lazyControllerClassNameArray;
- (id)aAWEPlayInteractionDispatcherManagerAdapter;
- (id)p_lazyControllerClassNameArray;
- (BOOL)shouldAddLazyControllerWithName:(id)a0;
- (void)addLazyController:(id)a0;
- (void)removeLazyController:(id)a0;
- (void)markDispatcherReady;
- (void)loadLazyControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
- (void)resetLazyController;
- (void)removeAllLazyControllers;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
