@class NSMutableDictionary, NSString, AWEPageContext, UIView, NSMutableArray, UIViewController;
@protocol AWEVideoPlayerLifeCycleProtocol, AWEDemaciaPageContextProtocol, AWEDemaciaContainerProtocol;

@interface AWEDemaciaDispatchManager : NSObject <AWEVideoPlayControllerDispatchProtocol, AWEVideoPlayRecognizeDispatchProtocol, AWEVideoPlayerLifeCycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (nonatomic) BOOL loadBelowControllers;
@property (weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol> *viewController;
@property (weak, nonatomic) UIView<AWEVideoPlayerLifeCycleProtocol> *rootView;
@property (weak, nonatomic) AWEPageContext<AWEDemaciaPageContextProtocol> *context;
@property (retain, nonatomic) NSMutableArray *controllerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerByProtocol:(id)a0;
- (id)classNameArray;
- (void)loadControllersWithContainer:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (id)controllerArrayBySelector:(SEL)a0;
- (id)controllersByProtocol:(id)a0;
- (void)loadControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)checkIsValidWithController:(id)a0;
- (id)classNameArrayBelowBaseUI;
- (id)classNameArrayAboveBaseUI;
- (void)loadBelowBaseUIControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)loadAboveBaseUIControllersWithViewController:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (id)controllerByClassString:(id)a0;
- (void)removeController:(id)a0;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
