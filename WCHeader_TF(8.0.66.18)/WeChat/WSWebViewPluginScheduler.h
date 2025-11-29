@class NSMutableDictionary;
@protocol WSWebViewPluginableProtocol;

@interface WSWebViewPluginScheduler : NSObject

@property (weak, nonatomic) id<WSWebViewPluginableProtocol> webViewOwner;
@property (retain, nonatomic) NSMutableDictionary *pluginInstanceDict;

- (void)observeNotifications;
- (void)onApplicationEnterBackground:(id)a0;
- (void)onApplicationEnterForeground:(id)a0;
- (void)onApplicationDidRotate:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithWebViewOwner:(id)a0;
- (id)initWithWebViewOwner:(id)a0 preloadPlugins:(id)a1;
- (void)registerPlugins:(id)a0;
- (void)registerPlugin:(id)a0;
- (BOOL)containPlugin:(id)a0;
- (id)getPluginInstanceByName:(id)a0;
- (id)getExistPluginInstanceByName:(id)a0;
- (void)dispatchEvent:(id)a0 userInfo:(id)a1;
- (void)loadingPlugins:(id)a0;
- (id)loadPluginWith:(id)a0;
- (id)loadPlugin:(id)a0;
- (void)observeLifeCircleFor:(id)a0;
- (void).cxx_destruct;

@end
