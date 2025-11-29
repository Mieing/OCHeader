@class NSString, NSArray;

@interface IESECRelationActivityDynamicComponentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *moduleUrl;
@property (nonatomic) unsigned long long containerType;
@property (copy, nonatomic) NSArray *rules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
