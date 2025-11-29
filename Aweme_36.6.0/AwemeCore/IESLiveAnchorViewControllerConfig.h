@interface IESLiveAnchorViewControllerConfig : NSObject

+ (id)commonConfig;
+ (id)audioModeConfig;
+ (id)modulesWithContext:(id)a0 engine:(id)a1 camera:(id)a2 privacyConfig:(id)a3;
+ (id)externalModeConfig;
+ (id)screenShotModeConfig;
+ (id)videoModeConfig;
+ (id)modulesWithContext:(id)a0 engine:(id)a1 camera:(id)a2 privacyConfig:(id)a3 virtualLivePreview:(id)a4;
+ (id)videoModeModulesWithContext:(id)a0 engine:(id)a1 camera:(id)a2;

@end
