@class NSString, IESECServiceProxy, NSMutableDictionary, NSMutableArray;
@protocol IESECShopForwardCoService, IESECShopPageContextV2;

@interface IESECShopControllerManagerV2 : NSObject <IESECShopControllerManagerV2, IESECShopControllerLifeCycleV2> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_controllerClassMap;
    NSMutableArray *_controllerLoadArray;
    unsigned long long _lifeCycleState;
    id<IESECShopPageContextV2> _pageContext;
    NSMutableDictionary *_controllerMap;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerArrayBySelector:(SEL)a0;
- (id)initWithPageContext:(id)a0;
- (id)allControllers;
- (void)controllerDidLoad;
- (void)controllerWillAppear:(BOOL)a0;
- (void)controllerWillDisappear:(BOOL)a0;
- (void)loadControllerForProtocol:(id)a0;
- (id)controllerForProtocol:(id)a0;
- (void)loadControllers;
- (void)registerControllerClass:(Class)a0 forProtocol:(id)a1;
- (Class)controllerClassForProtocol:(id)a0;
- (id)controllerLoadArray;
- (void)unloadController:(id)a0 forProtocol:(id)a1;
- (void)syncControllerLifeCycle:(id)a0;
- (void)setController:(id)a0 forProtocol:(id)a1;
- (void)controllerDidAppear:(BOOL)a0;
- (void)controllerDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
