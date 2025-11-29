@class NSString, AWELiveVSEpisode, AWEURLModel;

@interface AWEDetailBannerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bannerID;
@property (copy, nonatomic) NSString *bannerType;
@property (copy, nonatomic) NSString *bannerTitle;
@property (copy, nonatomic) NSString *bannerDescription;
@property (retain, nonatomic) AWEURLModel *headerImageURL;
@property (retain, nonatomic) AWEURLModel *backgroundImageURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *rawData;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (nonatomic) long long episodeStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundImageURLJSONTransformer;
+ (id)headerImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)extractRawData;
- (id)episodeStageString;
- (id)recordStatusString;
- (id)vsTrackParams;
- (id)stringValueForepisodeType:(long long)a0;
- (id)stringValueForEpisodeSubType:(long long)a0;
- (id)vsPlayerCoverShowTrackParams;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
