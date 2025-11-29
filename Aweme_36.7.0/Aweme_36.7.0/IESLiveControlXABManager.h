@interface IESLiveControlXABManager : NSObject

+ (BOOL)liveBizPerformanceEnable;
+ (double)liveBizLevelInheritanceTimeLimit;
+ (id)liveBizPerformanceDegradeScene;
+ (id)liveBizPerformanceDegradeSceneDescription;
+ (id)liveBizPerformanceUpgradeScene;
+ (id)liveBizPerformanceUpgradeSceneDescription;
+ (id)liveBizPerformanceConfig;
+ (long long)liveBizPerformancePushDeviceLimit;
+ (BOOL)liveLandscapePictureScaleGestureEnabled;

@end
