@class NSArray, AWEFansPushRewardModel, NSString, NSNumber;

@interface AWEFansPushReverseInWeekResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *urgeList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) long long total;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEFansPushRewardModel *rewardData;
@property (copy, nonatomic) NSString *topTitle;
@property (nonatomic) long long urgeLiveCnt;
@property (nonatomic) long long sendGiftCnt;

+ (id)urgeListJSONTransformer;
+ (id)rewardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
