@class NSString, AWELVideoPreviewConfig, AWELVideoEpisodeInfoModel, AWELVideoStateInFeed, AWELVideoXiguaGuideModel, NSDictionary, AWELVideoAlbumInfoModel, AWELVideoHighLight, NSNumber;

@interface AWELVideoBriefInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfo;
@property (retain, nonatomic) AWELVideoXiguaGuideModel *xiguaGuide;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWELVideoHighLight *highlightInfo;
@property (retain, nonatomic) AWELVideoPreviewConfig *previewConfig;
@property (retain, nonatomic) AWELVideoStateInFeed *feedState;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSString *authorRoleTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumInfoJSONTransformer;
+ (id)previewConfigJSONTransformer;
+ (id)xiguaGuideJSONTransformer;
+ (id)episodeInfoJSONTransformer;
+ (id)highlightInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
