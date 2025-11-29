@class AWEHPLeftSlideToUserConfig, NSMutableDictionary, NSString;

@interface AWEHPLeftSlideToUserConfigManager : NSObject <AWEHPLeftSlideToUserConfigManagerProtocol>

@property (retain, nonatomic) AWEHPLeftSlideToUserConfig *config;
@property (retain, nonatomic) NSMutableDictionary *supportTabConfigMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)guideConfig;
- (BOOL)configEnable;
- (double)mainTabSlideWidth;
- (double)edgeSlideWidth;
- (id)getTabConfigWithTabID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
