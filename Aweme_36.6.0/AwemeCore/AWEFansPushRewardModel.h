@class NSArray;

@interface AWEFansPushRewardModel : AWEBaseApiModel

@property (nonatomic) long long totalDiamondCount;
@property (retain, nonatomic) NSArray *totalGiftList;

+ (id)totalGiftListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
