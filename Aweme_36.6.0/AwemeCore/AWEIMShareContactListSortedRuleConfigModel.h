@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIMShareContactListSortedRuleConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *configName;
@property (retain, nonatomic) NSNumber *maxLength;
@property (copy, nonatomic) NSArray *basicList;
@property (copy, nonatomic) NSArray *insertList;
@property (copy, nonatomic) NSString *resortRule;
@property (copy, nonatomic) NSArray *globalFilterList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)basicListJSONTransformer;
+ (id)insertListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
