@class NSString, NSArray;

@interface AWECodeGenContentWithIconModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *iconIndexModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
