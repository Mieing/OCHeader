@class NSDictionary;

@interface AWEActivityPageSlideManager : NSObject

@property (retain, nonatomic) NSDictionary *angelConfig;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)registerExperiment;
- (void)handleUGLynxPageDidAppearNotification:(id)a0;
- (BOOL)hitWhiteList:(id)a0;
- (BOOL)enableActivityPageSlideHook;
- (void)trackActivityPageSlideIntercept:(BOOL)a0 urlString:(id)a1;
- (id)urlWhiteList;
- (void).cxx_destruct;
- (void)setup;

@end
