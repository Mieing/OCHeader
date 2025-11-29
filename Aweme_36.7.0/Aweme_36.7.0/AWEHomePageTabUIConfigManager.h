@class AWEHomePageTabTextConfig, NSString, AWEHomePageTabUIConfigModel;

@interface AWEHomePageTabUIConfigManager : NSObject <AWEHomePageTabUIConfigManagerProtocol>

@property (retain, nonatomic) AWEHomePageTabUIConfigModel *config;
@property (retain, nonatomic) AWEHomePageTabTextConfig *topTabTextConfig;
@property (retain, nonatomic) AWEHomePageTabTextConfig *bottomTabTextConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)needOptimizeTabTextColor;
- (void)p_initConfig;
- (void)p_initConfigWithDic:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
