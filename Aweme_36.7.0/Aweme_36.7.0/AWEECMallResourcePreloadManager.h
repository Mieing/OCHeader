@class NSDictionary;

@interface AWEECMallResourcePreloadManager : NSObject

@property (copy, nonatomic) NSDictionary *preloadConfig;
@property (copy, nonatomic) NSDictionary *preloadedFlagMap;

+ (id)sharedManager;

- (void)standBy;
- (void)triggerPreloadWithSceneName:(id)a0;
- (void)preloadAndPreDecode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
