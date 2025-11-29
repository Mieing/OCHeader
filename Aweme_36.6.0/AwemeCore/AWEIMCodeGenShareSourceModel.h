@class NSString, NSArray, NSDictionary;

@interface AWEIMCodeGenShareSourceModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *membersModelArray;
@property (nonatomic) BOOL abnormal;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
