@class NSMutableDictionary, WAWebViewController, NSRecursiveLock;

@interface WAWebViewPluginScheduler : NSObject

@property (readonly, weak, nonatomic) WAWebViewController *ownerWebViewController;
@property (retain, nonatomic) NSRecursiveLock *pluginDictLock;
@property (readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic;

- (id)initWithOwnerWebViewController:(id)a0;
- (void)dealloc;
- (void)loadingInitPluginArray;
- (void)createPluginInstanceIfNotExsist:(id)a0;
- (id)GetPluginInstanceByName:(id)a0;
- (id)GetPluginInstanceIfExsist:(id)a0;
- (void)loadPluginForEvent:(unsigned long long)a0;
- (void)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end
