@class NSArray;

@interface BDUGLuckyRulesItem : BDUGLuckyBDModel

@property (nonatomic) BOOL enableInjected;
@property (copy, nonatomic) NSArray *staticSettingsKeys;
@property (copy, nonatomic) NSArray *dynamicSettingsKeys;
@property (copy, nonatomic) NSArray *pollingSettingsKeys;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
