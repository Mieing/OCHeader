@class NSString;

@interface AWENormalModeTabBarViewsFactory : HTSService <AWENormalModeTabBarViewsFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENormalModeTabBarFactoryCommonAdapterClass;

- (void)updateInnerViewShadow:(id)a0;
- (id)customButtonWithInnerView:(id)a0 viewController:(id)a1 type:(long long)a2;
- (id)tabBarButtonWithText:(id)a0 image:(id)a1 selectedImage:(id)a2 viewController:(id)a3 type:(long long)a4;
- (long long)tabBarButtonLayoutStyle;
- (id)aAWENormalModeTabBarFactoryCommonAdapter;
- (id)tabBarVerticalButtonWithText:(id)a0 image:(id)a1 selectedImage:(id)a2 type:(long long)a3;
- (id)tabBarTextButtonWithText:(id)a0 type:(long long)a1;
- (id)tabBarButtonWithItemType:(long long)a0 viewController:(id)a1;
- (id)verticalInnerViewWithText:(id)a0 image:(id)a1 selectedImage:(id)a2;
- (id)innerViewWithText:(id)a0;
- (id)customFullAbilityInnerViewWithText:(id)a0 image:(id)a1 selectedImage:(id)a2;
- (id)tabBarButtonWithParams:(id)a0;
- (id)p_iconTextUIConfigWithParams:(id)a0;
- (id)p_iconUIConfigWithParams:(id)a0;

@end
