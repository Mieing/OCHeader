@class NSArray, NSString;

@interface IESIMCodeGenGroupTagSettingGetResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *itemsModelArray;
@property (nonatomic) BOOL supportCustomizedItem;
@property (copy, nonatomic) NSString *customizedTagSchema;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
