@class NSString, NSArray, NSDictionary, NSNumber, AWEIMShareContactListSortedRuleConfigModel;

@interface AWEIMShareContactListSortedRuleBasicListConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *sourceKey;
@property (retain, nonatomic) AWEIMShareContactListSortedRuleConfigModel *nestedSource;
@property (copy, nonatomic) NSArray *filterList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)nestedSourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
