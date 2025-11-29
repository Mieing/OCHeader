@class AWEHPTabRefreshConfig, NSMutableDictionary;

@interface AWEHPTabRefreshConfigManager : NSObject

@property (retain, nonatomic) AWEHPTabRefreshConfig *config;
@property (retain, nonatomic) NSMutableDictionary *tabCustomConfigMap;

+ (id)sharedInstance;

- (double)minAnimateDuration;
- (long long)getAnimateTypeWithTabID:(id)a0;
- (double)maxAnimateDuration;
- (id)getDragRefreshTextWithTabName:(id)a0;
- (id)p_getCustomConfigWithTabID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
