@class NSString, AWEVideoHallActionInfo, AWELVideoEpisodeInfoModel, AWEURLModel, AWEVideoHallHistoryInfo, AWEVideoHallBannerVideoInfo, AWELVideoAlbumInfoModel, AWETheaterEntranceGuideModel;

@interface AWEVideoHallBlockItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *blockId;
@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEURLModel *url;
@property (retain, nonatomic) AWEVideoHallActionInfo *action;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWEVideoHallBannerVideoInfo *videoInfo;
@property (retain, nonatomic) AWEVideoHallHistoryInfo *history;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *theaterGuideInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)historyJSONTransformer;
+ (id)albumInfoJSONTransformer;
+ (id)actionJSONTransformer;
+ (id)videoInfoJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)theaterGuideInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;

- (void).cxx_destruct;

@end
