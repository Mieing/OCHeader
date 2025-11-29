@class NSArray;

@interface IESIMCodeGenConversationFloatingBarConfigsResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *floatingBarConfigsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
