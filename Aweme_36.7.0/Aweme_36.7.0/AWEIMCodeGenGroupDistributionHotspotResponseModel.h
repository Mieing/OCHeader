@class NSArray;

@interface AWEIMCodeGenGroupDistributionHotspotResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *hotspotInfoListModelArray;
@property (nonatomic) BOOL hasMore;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
