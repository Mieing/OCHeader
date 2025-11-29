@interface AWEECPageDisplayCycleImpl : NSObject <AWEECPageDisplayCycleInterface>

+ (void)didOpenPage:(id)a0 switchMode:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)willClosePage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)willOpenNextInPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)willAppearAgainForPage:(id)a0 switchMode:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)didPage:(id)a0 switchTo:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)willAppearPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)willDisappearPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)didDisappearPage:(id)a0 withScene:(long long)a1 fromVC:(id)a2 andExtra:(id)a3;
+ (void)didPage:(id)a0 willSwitchTo:(long long)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)didPage:(id)a0 panPercent:(double)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;
+ (void)didPage:(id)a0 scrollOffset:(double)a1 withScene:(long long)a2 fromVC:(id)a3 andExtra:(id)a4;

@end
