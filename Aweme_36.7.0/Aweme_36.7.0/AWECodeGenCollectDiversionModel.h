@class NSArray;

@interface AWECodeGenCollectDiversionModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *musicDiversionListModelArray;
@property (nonatomic) int diversionCount;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
