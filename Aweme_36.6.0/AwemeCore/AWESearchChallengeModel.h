@class AWEChallengeInterveneAdModel, NSArray, AWEChallengeModel, AWEChallengeInterveneHotSpotInfoModel, AWEDcmInfoModel;

@interface AWESearchChallengeModel : AWEBaseApiModel <IGListDiffable>

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) AWEDcmInfoModel *dcmInfoModel;
@property (retain, nonatomic) NSArray *hightlightPositions;
@property (retain, nonatomic) AWEChallengeInterveneAdModel *adData;
@property (copy, nonatomic) NSArray *videos;
@property (retain, nonatomic) AWEChallengeInterveneHotSpotInfoModel *hotSpotInfo;

+ (id)challengeJSONTransformer;
+ (id)dcmInfoModelJSONTransformer;
+ (id)hotSpotInfoJSONTransformer;
+ (id)videosJSONTransformer;
+ (id)hightlightPositionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
