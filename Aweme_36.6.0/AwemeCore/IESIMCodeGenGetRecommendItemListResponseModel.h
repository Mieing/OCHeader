@class NSArray, IESIMCodeGenRecommendIntroductionModel;

@interface IESIMCodeGenGetRecommendItemListResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *itemListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (retain, nonatomic) IESIMCodeGenRecommendIntroductionModel *recommendIntroductionModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
