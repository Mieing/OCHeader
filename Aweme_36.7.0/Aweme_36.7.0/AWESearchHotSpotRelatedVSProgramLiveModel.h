@class NSString, AWELiveVSEpisode, AWEURLModel;

@interface AWESearchHotSpotRelatedVSProgramLiveModel : AWEBaseApiModel

@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) AWEURLModel *posterURL;
@property (copy, nonatomic) NSString *videoTitle;
@property (nonatomic) long long liveType;
@property (copy, nonatomic) NSString *episodeExtra;

+ (id)posterURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
