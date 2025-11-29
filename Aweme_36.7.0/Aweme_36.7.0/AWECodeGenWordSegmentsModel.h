@class NSString, NSArray;

@interface AWECodeGenWordSegmentsModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *highLightsModelArray;
@property (nonatomic) int length;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
