@class NSString, NSNumber;

@interface AWESearchInnerGuideRelatedRecommendModel : AWEBaseApiModel

@property (nonatomic) long long dailyGuideNums;
@property (nonatomic) long long weaklyGuideNums;
@property (nonatomic) long long maxGuideNums;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSNumber *showAfterSeconds;
@property (retain, nonatomic) NSNumber *dismissSeconds;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
