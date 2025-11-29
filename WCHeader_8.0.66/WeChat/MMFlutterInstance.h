@class NSString, MMFlutterEngine, MMFlutterEngineGroup, MMFlutterAppForegroundState, NSMutableArray, MMFlutterHybridNavPageState;

@interface MMFlutterInstance : NSObject

@property (retain, nonatomic) MMFlutterEngineGroup *group;
@property (retain, nonatomic) MMFlutterEngine *engine;
@property (copy, nonatomic) NSString *engineId;
@property (retain, nonatomic) NSString *engineGroupId;
@property (retain, nonatomic) MMFlutterHybridNavPageState *pageState;
@property (retain, nonatomic) MMFlutterAppForegroundState *foregroundState;
@property (retain, nonatomic) NSString *route;
@property (nonatomic) long long createCost;
@property (retain, nonatomic) NSMutableArray *plugins;
@property (copy, nonatomic) NSString *plugin;
@property (nonatomic) BOOL deallocDestroyEngine;
@property (nonatomic) BOOL viewControllerKeepEngine;

- (id)initWithEngineGroup:(id)a0 plugin:(id)a1;
- (void)dealloc;
- (void)reportEngineInfo;
- (void)setNavigatorDelegate:(id)a0;
- (void)addPlugins:(id)a0;
- (void)push:(id)a0 arguments:(id)a1;
- (void)showViewControllerImpl:(id)a0 viewController:(id)a1 pageStyle:(id)a2 completion:(id /* block */)a3;
- (void)showViewController:(id)a0 pageStyle:(id)a1 completion:(id /* block */)a2 createCompletion:(id /* block */)a3;
- (void)doShowViewController:(id)a0 pageStyle:(id)a1 completion:(id /* block */)a2 createCompletion:(id /* block */)a3 flutterVC:(id)a4;
- (void)show:(id)a0 pageStyle:(id)a1;
- (void)show:(id)a0 pageStyle:(id)a1 completion:(id /* block */)a2;
- (void)show:(id)a0 pageStyle:(id)a1 completion:(id /* block */)a2 createCompletion:(id /* block */)a3;
- (id)createViewController:(Class)a0;
- (void)createEngine:(id)a0 arguments:(id)a1;
- (void)setAttachedPluginToNavigator;
- (void)requestPreRender:(id /* block */)a0;
- (void)requestPreRender:(id /* block */)a0 timeOutInMs:(long long)a1;
- (void).cxx_destruct;

@end
