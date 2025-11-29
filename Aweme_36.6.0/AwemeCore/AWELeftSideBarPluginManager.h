@class NSArray;

@interface AWELeftSideBarPluginManager : NSObject

@property (retain, nonatomic) NSArray *plugins;
@property (retain, nonatomic) NSArray *pluginRegisterModels;
@property (nonatomic) BOOL hasLoad;

- (void)loadAllPluginsWithDelegate:(id)a0;
- (void)callLeftSideBarBeginLanding:(id)a0 withModel:(id)a1;
- (void)callLeftSideBarEndLanding:(id)a0 withModel:(id)a1;
- (void)callOnLeftSideBarDidCreate:(id)a0;
- (void)callOnLeftSideBarDidOpen:(id)a0;
- (void)callOnLeftSideBarDidClose:(id)a0;
- (void)callOnLeftSideBarVCContainerDidAppear:(id)a0;
- (void)callOnLeftSideBarViewWillDisAppear:(id)a0;
- (void)callOnLeftSideBarViewDidDisAppear:(id)a0;
- (void)p_registerAllPlugins;
- (void)p_loadAllPluginsWithDelegate:(id)a0;
- (void)enumeratePluginsWithBlock:(id /* block */)a0;
- (void)p_registerPluginWithArray:(id)a0 model:(id)a1;
- (void).cxx_destruct;

@end
