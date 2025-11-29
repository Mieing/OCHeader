@class NSString, NSArray;

@interface AWEIMServiceComponentConfig : MTLModel <MTLJSONSerializing, AWEIMStrategyConfigResponseCompactProtocol>

@property (copy) NSString *scene;
@property (copy) NSArray *componentItemConfigs;
@property long long showCount;
@property (copy) NSArray *baseConfigNameArray;
@property (copy) NSString *configName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)componentItemConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
