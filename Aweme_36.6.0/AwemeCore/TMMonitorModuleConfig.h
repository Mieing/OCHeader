@class NSDictionary;

@interface TMMonitorModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSDictionary *monitorConfig;
@property (readonly, copy, nonatomic) NSDictionary *moduleConfigs;

+ (id)defaultMonitorConfig;
+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
