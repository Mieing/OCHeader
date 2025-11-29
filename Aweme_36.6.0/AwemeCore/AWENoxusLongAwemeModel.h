@class NSString, AWEDemaciaAwemeStatisticsModel, AWENoxusEpisodeInfoModel, AWENoxusExtraInfoModel, AWEDemaciaVideoModel;

@interface AWENoxusLongAwemeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) AWEDemaciaVideoModel *video;
@property (retain, nonatomic) AWEDemaciaAwemeStatisticsModel *statistics;
@property (retain, nonatomic) AWENoxusEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWENoxusExtraInfoModel *extraInfo;
@property (nonatomic) BOOL isLocated;
@property (nonatomic) BOOL isLanscape;
@property (copy, nonatomic) NSString *preadParams;

+ (id)videoJSONTransformer;
+ (id /* block */)isEqualBlock;
+ (id)statisticsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
