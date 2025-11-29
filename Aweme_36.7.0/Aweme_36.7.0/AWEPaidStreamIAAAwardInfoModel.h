@class NSString, NSNumber;

@interface AWEPaidStreamIAAAwardInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sendUniqId;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSNumber *timestampP;
@property (copy, nonatomic) NSString *sign;
@property (retain, nonatomic) NSNumber *episodeRank;
@property (nonatomic) long long bizType;
@property (nonatomic) long long unlockEpisode;
@property (nonatomic) long long watchDuration;
@property (nonatomic) long long adRank;
@property (nonatomic) long long totalAdCount;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (nonatomic) long long requiredCount;
@property (nonatomic) long long finishedCount;
@property (nonatomic) long long finishedProgress;
@property (nonatomic) long long afterFinishedCount;
@property (nonatomic) long long afterFinishedProgress;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
