@class NSNumber, AWELiveEpisodeMod;

@interface AWELiveEpisodeExtra : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *episodeId;
@property (retain, nonatomic) NSNumber *seasonId;
@property (retain, nonatomic) AWELiveEpisodeMod *mod;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
