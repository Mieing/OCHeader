@class NSArray, NSString;

@interface AWECodeGenBubbleToastModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *iconListModelArray;
@property (copy, nonatomic) NSString *descriptionString;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
