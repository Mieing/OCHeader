@class NSString, NSArray;

@interface AWECodeGenCEMInteractiveContentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *imageListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
