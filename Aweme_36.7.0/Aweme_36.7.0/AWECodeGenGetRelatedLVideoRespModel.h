@class NSArray;

@interface AWECodeGenGetRelatedLVideoRespModel : AWEBaseResponseModel

@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *awemeListModelArray;
@property (nonatomic) int dataFrom;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
