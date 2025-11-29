@class AWEChallengeInterveneAdModel, AWEChallengeInterveneHotSpotInfoModel, AWEChallengeModel;

@interface AWEChallengeInterveneModel : AWEBaseApiModel

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (nonatomic) long long position;
@property (nonatomic) unsigned long long labelType;
@property (retain, nonatomic) AWEChallengeInterveneAdModel *adData;
@property (retain, nonatomic) AWEChallengeInterveneHotSpotInfoModel *hotSpotInfo;
@property (nonatomic) long long hashtagChannel;

+ (id)challengeJSONTransformer;
+ (id)adDataJSONTransformer;
+ (id)hotSpotInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
