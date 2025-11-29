@class NSString, NSArray;

@interface IESIMCodeGenShowTipsModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSArray *templateModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
