@class NSArray;

@interface AWECodeGenWordSegmentsInfoModel : AWEBaseDataModel

@property (nonatomic) long long templateId;
@property (copy, nonatomic) NSArray *wordSegmentsListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
