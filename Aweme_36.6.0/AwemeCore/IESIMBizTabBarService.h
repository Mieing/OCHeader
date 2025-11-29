@class NSString;

@interface IESIMBizTabBarService : HTSService <IESIMBizTabBarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageReferStringForTabItemType:(long long)a0;
- (id)selectedRootViewController;
- (id)getTabBarController;
- (id)tabBarControllerDidChangeSelectedIndexNotificationName;
- (long long)iesimTabBarItemTypeWithType:(long long)a0;
- (long long)selectedItemTypeWithModelType:(long long)a0;
- (id)tabBarControllerChangeSelectedIndexPreviousButtonTypeKey;
- (id)tabBarControllerChangeSelectedIndexEnterFromKey;
- (void)tabBar:(id)a0 setHidden:(BOOL)a1 fromClass:(Class)a2 selector:(SEL)a3;
- (void)tabBar:(id)a0 setAlpha:(double)a1 fromClass:(Class)a2 selector:(SEL)a3;
- (long long)p_iesimTabBarItemTypeWithAWEType:(long long)a0;
- (long long)p_aweModeTypeWithIESIMModelType:(long long)a0;
- (long long)selectedItemType;

@end
