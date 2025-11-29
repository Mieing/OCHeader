@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWEIMShareContactListSortedRuleInsertListConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *order;
@property (retain, nonatomic) NSNumber *position;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *sourceKey;
@property (copy, nonatomic) NSArray *filterList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
