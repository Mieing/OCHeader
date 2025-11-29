@class AWEHPFeedTabGuideConfig;

@interface AWEHPTabGuideConfigManager : NSObject <AWEHPTabGuideConfigManagerProtocol>

@property (retain, nonatomic) AWEHPFeedTabGuideConfig *config;
@property (nonatomic) BOOL isDisableOldTabGuide;

+ (id)sharedInstance;

- (long long)preloadSize;
- (BOOL)isEnterFromSupport:(id)a0;
- (BOOL)disableOldTabGuide;
- (id)rollBackConfig;
- (BOOL)configEnable;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (id)setupConfig;

@end
