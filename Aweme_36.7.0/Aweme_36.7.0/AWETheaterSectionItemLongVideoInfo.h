@class AWETheaterSectionItemHighlightInfo, AWELVideoEpisodeInfoModel, NSString, AWELVideoAlbumInfoModel;

@interface AWETheaterSectionItemLongVideoInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWETheaterSectionItemHighlightInfo *highlightInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumInfoJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)highlightInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
