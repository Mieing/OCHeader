@interface AWEVersionUpdateABSettings : NSObject

+ (BOOL)forceUpgradeCheckEncryptionEnable;
+ (BOOL)forceUpgradeAlwaysShowingEnable;
+ (BOOL)usePizzaEnable;
+ (id)limitedScenes;
+ (long long)delayTriggerDuration;
+ (id)updateDialogConfig;
+ (BOOL)avoidSpecialSceneEnable;
+ (id)upgradeStatusMaximumValidVersion;
+ (long long)upgradeStatus;

@end
