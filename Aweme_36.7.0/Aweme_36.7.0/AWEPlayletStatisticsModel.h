@class NSNumber;

@interface AWEPlayletStatisticsModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *collectCount;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (retain, nonatomic) NSNumber *maxEpisode;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *lastAddedItemTime;
@property (retain, nonatomic) NSNumber *rank;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
