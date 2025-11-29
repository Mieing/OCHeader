@class NSDictionary;

@interface IESGCPSettingFilterConfig : NSObject

@property (copy, nonatomic) NSDictionary *filterRules;
@property (copy, nonatomic) NSDictionary *filterConfig;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
