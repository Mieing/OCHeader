@class NSString;

@interface AWEBizTabBarItemConfigsRegister : HTSService <AWEBizTabBarItemConfigsRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerTabBarItemNormalConfigClass:(Class)a0 type:(long long)a1;
- (void)registerTabBarGlobalPluginClass:(Class)a0;
- (void)registerTabBarGlobalPlugin:(id)a0;

@end
