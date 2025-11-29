@interface IESECTabKitABTestHelper : NSObject

+ (BOOL)enableTabKitDeepLinkPrefetchForBizTag:(id)a0;
+ (long long)enableFeature:(id)a0 routerParams:(id)a1 bizTag:(id)a2;
+ (id)tabKitConfigForBizTag:(id)a0;
+ (BOOL)enableTabKitAutoRotateFix;
+ (id)mallWarmupConfig;
+ (id)p_bizConfigForFeature:(id)a0 bizTag:(id)a1;
+ (id)p_globalConfigForFeature:(id)a0;
+ (id)p_tabkitTabConfigAB;
+ (id)p_tabConfigForUri:(id)a0 config:(id)a1;
+ (id)p_tabkitTabConfig;
+ (id)p_tabkitAbilityConfig;
+ (id)preconnectHostConfigForBizTag:(id)a0;
+ (BOOL)enableUrlPreDecode;
+ (BOOL)enableGlobalPreProcess;
+ (BOOL)enableTabKitFPSMonitor;
+ (BOOL)enableBTMTrackerParams;
+ (BOOL)disableSingleTabPageViewTracker;
+ (BOOL)enableTabKitMergeAnchorParams;
+ (BOOL)enableTabKitPopGestureFix;
+ (BOOL)enableTabKitCloseActionOpt;
+ (BOOL)enableTabKitTopStyleCopyFix;
+ (BOOL)enableTabKitDowngradeFix;
+ (BOOL)enableTabKitPadAutoRotateFix;
+ (BOOL)enablePuzzleContainerWarmup;
+ (id)puzzleWarmupBundle;
+ (long long)enableFeature:(id)a0 bundleUrl:(id)a1;
+ (double)autoUpSlideRatioForBizTag:(id)a0;

@end
