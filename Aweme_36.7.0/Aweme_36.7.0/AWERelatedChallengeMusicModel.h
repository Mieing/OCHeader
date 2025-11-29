@class AWEMusicModel, AWEChallengeModel;

@interface AWERelatedChallengeMusicModel : AWEBaseApiModel

@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (retain, nonatomic) AWEChallengeModel *challengeModel;
@property (nonatomic) unsigned long long type;

+ (id)musicModelJSONTransformer;
+ (id)challengeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
