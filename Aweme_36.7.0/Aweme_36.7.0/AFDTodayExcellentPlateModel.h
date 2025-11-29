@class NSArray;

@interface AFDTodayExcellentPlateModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *dataList;
@property (nonatomic) long long hangoutRadius;
@property (nonatomic) long long dailyRecommendStyle;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
