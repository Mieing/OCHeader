@class NSArray, NSString;

@interface AWECodeGenUgcTagsModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *ugcTextModelArray;
@property (copy, nonatomic) NSString *negativeText;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
