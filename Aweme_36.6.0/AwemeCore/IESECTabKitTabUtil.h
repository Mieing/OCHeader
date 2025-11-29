@interface IESECTabKitTabUtil : NSObject

+ (struct CGSize { double x0; double x1; })adaptiveSizeForOriginSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)componentView:(id)a0;
+ (void)markBadgeRead:(id)a0;
+ (id)tabBarStyleForScreenState:(unsigned long long)a0 tabMultiStateConfig:(id)a1 globalMultiStateConfig:(id)a2;
+ (BOOL)configComponent:(id)a0 withDisplayMode:(unsigned long long)a1;
+ (void)reloadTabBarStyle:(id)a0 withConfig:(id)a1;
+ (void)createTabInfosWithImagePlaceHolder:(id)a0 combineCallBack:(BOOL)a1 styleConfigs:(id)a2 completion:(id /* block */)a3;
+ (id)configParamsWithKeys:(id)a0 rawData:(id)a1;
+ (id)parseRawData:(id)a0 modelClass:(Class)a1 error:(id *)a2;
+ (void)changeComponent:(id)a0 visibility:(BOOL)a1 animated:(BOOL)a2;
+ (unsigned long long)checkHybridContainerForTabType:(unsigned long long)a0 originHybridContainer:(unsigned long long)a1;
+ (id)splitStyleWithTabConfig:(id)a0 globalConfig:(id)a1;
+ (long long)tabbarHLayoutAlignment:(unsigned long long)a0;
+ (id)tabBarStyleForTabStyleConfig:(id)a0 globalStyleConfig:(id)a1;
+ (id)tabBarStyleForScreenState:(unsigned long long)a0 multiStateConfig:(id)a1;
+ (id)tabStyleConfigForHighPriorStyle:(id)a0 lowPriorStyle:(id)a1;
+ (id)badgeCacheIdentifier:(id)a0;
+ (void)changeComponentView:(id)a0 visibility:(BOOL)a1 animated:(BOOL)a2;
+ (void)createTabInfosWithMode:(unsigned long long)a0 combineCallBack:(BOOL)a1 imagePlaceHolder:(id)a2 styleConfigs:(id)a3 completion:(id /* block */)a4;
+ (BOOL)badgeMarkedRead:(id)a0;
+ (id)badgeNumberAttributedString:(unsigned long long)a0;
+ (id)badgeTextAttributedString:(id)a0;
+ (void)reloadTabBarStyle:(id)a0 withBFFStyle:(id)a1;
+ (void)updateTabBar:(id)a0 withIndicatorStyle:(id)a1;
+ (id)reloadTabBarStyle:(id)a0 withScreenState:(unsigned long long)a1 multiStateConfig:(id)a2;
+ (id)tabStyleConfigForScreenState:(unsigned long long)a0 fullStateStyle:(id)a1 splitStateStyle:(id)a2;

@end
