@class MMWebViewController, NSMutableDictionary;

@interface MMWebViewPluginScheduler : NSObject

@property (readonly, weak, nonatomic) MMWebViewController *ownerWebViewController;
@property (readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic;

+ (BOOL)isWebScrollEvent:(unsigned long long)a0;

- (id)initWithOwnerWebViewController:(id)a0;
- (void)dealloc;
- (void)loadingInitPluginArray;
- (id)GetPluginInstanceByName:(id)a0;
- (void)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (void).cxx_destruct;

@end
