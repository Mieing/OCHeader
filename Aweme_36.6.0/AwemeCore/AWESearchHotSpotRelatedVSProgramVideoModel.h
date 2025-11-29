@class NSString, AWELiveVSEpisode, AWEURLModel;

@interface AWESearchHotSpotRelatedVSProgramVideoModel : AWEBaseApiModel

@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) AWEURLModel *posterURL;
@property (copy, nonatomic) NSString *videoTitle;
@property (copy, nonatomic) NSString *videoStage;
@property (copy, nonatomic) NSString *episodeExtra;

+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
