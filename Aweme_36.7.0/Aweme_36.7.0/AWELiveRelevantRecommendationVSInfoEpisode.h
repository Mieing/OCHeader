@class NSString, AWEURLModel;

@interface AWELiveRelevantRecommendationVSInfoEpisode : AWEBaseApiModel

@property (nonatomic) long long episodeId;
@property (copy, nonatomic) NSString *episodeName;
@property (retain, nonatomic) AWEURLModel *episodeCover;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long seasonId;
@property (copy, nonatomic) NSString *itemId;

- (void).cxx_destruct;
- (id)initWithEpisode:(id)a0;

@end
