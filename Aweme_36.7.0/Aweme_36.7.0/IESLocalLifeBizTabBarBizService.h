@class NSString;

@interface IESLocalLifeBizTabBarBizService : HTSService <IESLocalLifeBizTabBarBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTabBarController;
+ (void)tabBar:(id)a0 setHidden:(BOOL)a1 fromClass:(Class)a2 selector:(SEL)a3;

- (id)iesll_hp_businessID:(id)a0;
- (void)iesll_hp_setHidden:(BOOL)a0 businessID:(id)a1 withTabBar:(id)a2;
- (void)iesll_hp_setHidden:(BOOL)a0 fromClass:(Class)a1 selector:(SEL)a2 withTabBar:(id)a3;
- (void)iesll_hp_setHidden:(BOOL)a0 transition:(Class)a1 context:(id)a2 withTabBar:(id)a3;
- (void)iesll_hp_setHidden:(BOOL)a0 className:(id)a1 funcName:(id)a2 withTabBar:(id)a3;
- (void)iesll_hp_setAlpha:(double)a0 businessID:(id)a1 withTabBar:(id)a2;
- (void)iesll_hp_setAlpha:(double)a0 fromClass:(Class)a1 selector:(SEL)a2 withTabBar:(id)a3;
- (void)iesll_hp_setAlpha:(double)a0 transition:(Class)a1 context:(id)a2 withTabBar:(id)a3;
- (void)iesll_hp_setAlpha:(double)a0 className:(id)a1 funcName:(id)a2 withTabBar:(id)a3;

@end
