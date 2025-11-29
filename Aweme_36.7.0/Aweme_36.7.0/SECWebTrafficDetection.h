@interface SECWebTrafficDetection : NSObject

+ (void)startWebResourceDetectionAspects;
+ (void)startWebResourceProtectionAspects;
+ (void)startPageSafetyDetectionAspects;
+ (void)startPageSafetyProtectionAspects;
+ (void)registerWebPageTrafficPlugin;
+ (void)setup;

@end
