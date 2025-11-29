@class NSNumber;

@interface AWEMixVideoStaticsModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *collectCount;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (retain, nonatomic) NSNumber *maxEpisode;
@property (retain, nonatomic) NSNumber *lastEpisode;
@property (retain, nonatomic) NSNumber *updatedCount;
@property (retain, nonatomic) NSNumber *collectNum;
@property (retain, nonatomic) NSNumber *totalEpisode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
