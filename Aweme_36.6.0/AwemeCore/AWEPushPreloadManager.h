@interface AWEPushPreloadManager : NSObject

+ (id)sharedInstance;

- (BOOL)enablePushPortReplace;
- (BOOL)enablePushPreload;
- (void)registerExposureExperiment;
- (id)init;

@end
