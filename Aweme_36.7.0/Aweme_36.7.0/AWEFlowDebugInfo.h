@interface AWEFlowDebugInfo : NSObject

+ (id)currentLane;
+ (BOOL)isPPEEnv;
+ (BOOL)isBOEEnv;
+ (id)sharedInstance;

@end
