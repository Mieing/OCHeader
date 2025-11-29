@interface HunterSettingsManager : NSObject

+ (BOOL)enableHunterPageAndPopupUseBizWithParams:(id)a0;
+ (id)needAddParamsWithParams:(id)a0;
+ (id)needEncodeParamsWithParams:(id)a0;
+ (BOOL)enableHunterBizPreGetQueryDict;
+ (id)hunterResourceCommon;
+ (BOOL)shouldForbidHunterUseLynxTemplateBundle;
+ (BOOL)enableReusePluginUseNewViewModel;
+ (id)hunterOptimizationAbility;
+ (id)hunterPageConfigs;
+ (id)hunterPageConfigsLibra1;
+ (id)hunterPageConfigsLibra2;
+ (id)hunterPageConfigsLibra3;
+ (id)hunterPageConfigsLibra4;
+ (id)hunterPageConfigsLibra5;
+ (id)hunterSettingsInstance;
+ (long long)hunterBeforeLoadSeconds;
+ (id)hunterFPSSceneCountConfig;
+ (BOOL)enableHunterFPSMonitor;
+ (BOOL)enableHunterBizUpdateGlobalProps;
+ (BOOL)shouldForbidHunterPreActiveGecko;
+ (id)hunterPreActiveConfigs;
+ (id)hunterPreActiveCommon;
+ (long long)hunterFallbackCount;

@end
