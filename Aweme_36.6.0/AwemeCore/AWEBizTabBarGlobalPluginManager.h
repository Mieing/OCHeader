@class NSMutableArray, NSHashTable;

@interface AWEBizTabBarGlobalPluginManager : NSObject

@property (retain, nonatomic) NSMutableArray *plugins;
@property (retain, nonatomic) NSHashTable *weakPlugins;

+ (id)sharedInstance;

- (void)tabBarDidSetHidden:(BOOL)a0;
- (void)registerTabBarGlobalPluginClass:(Class)a0;
- (void)registerTabBarGlobalPlugin:(id)a0;
- (BOOL)p_checkRegisterClass:(Class)a0;
- (BOOL)shouldInterceptSingleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (void)tabBarDidChangeSelectedTabWithCurrentSelectedTabID:(id)a0 previousSelectedTabID:(id)a1;
- (void)tabBarWillChangeSelectedTabWithCurrentSelectedTabID:(id)a0 previousSelectedTabID:(id)a1;
- (id)shouldInterceptTabCurrentReferStringWithTabID:(id)a0;
- (void)enumeratePluginsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
