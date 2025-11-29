@class NSMutableDictionary, NSString, AWEPageContext, UIView, NSMutableArray;
@protocol AWEControllerProtocol, AWEContainerProtocol;

@interface AWEBaseControllerManager : NSObject <AWEBaseControllerDIProtocol>

@property (class, nonatomic) BOOL protocolCacheEnabled;

@property (retain, nonatomic) NSMutableArray<AWEControllerProtocol> *controllerInstanceArray;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (weak, nonatomic) id<AWEContainerProtocol> container;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) AWEPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerByProtocol:(id)a0;
- (id)classNameArray;
- (id)controllerArray;
- (void)loadControllersWithContainer:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (id)controllerArrayBySelector:(SEL)a0;
- (id)controllersByProtocol:(id)a0;
- (void)updateRootView:(id)a0;
- (void)removeAllControllers;
- (void)log:(id)a0 selectorName:(id)a1 startTime:(double)a2 endTime:(double)a3;
- (void)removeController:(id)a0;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
