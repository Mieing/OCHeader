@class NSString, NSArray;

@interface AWECodeGenFunctionBanPopupModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *buttonsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
