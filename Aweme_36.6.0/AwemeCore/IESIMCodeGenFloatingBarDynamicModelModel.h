@class NSString, NSArray, NSDictionary;

@interface IESIMCodeGenFloatingBarDynamicModelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *barId;
@property (nonatomic) long long barType;
@property (copy, nonatomic) NSArray *validTemplatesArray;
@property (copy, nonatomic) NSArray *barDataModelArray;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSDictionary *schemaExtra;
@property (nonatomic) long long sortTime;
@property (copy, nonatomic) NSArray *visibleUsersArray;
@property (copy, nonatomic) NSArray *invisibleUsersArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
