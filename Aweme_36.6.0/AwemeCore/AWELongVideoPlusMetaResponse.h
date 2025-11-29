@class NSArray, AWELongVideoAlbumBMemberInfoModel, AWELongVideoPlusEpisodeListResponse, NSString, AWELVideoAlbumInfoModel;

@interface AWELongVideoPlusMetaResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELongVideoPlusEpisodeListResponse *episodeListInfo;
@property (copy, nonatomic) NSArray *albumListSeries;
@property (nonatomic) long long episodePageType;
@property (retain, nonatomic) AWELongVideoAlbumBMemberInfoModel *bMemberInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumInfoJSONTransformer;
+ (id)episodeListInfoJSONTransformer;
+ (id)albumListSeriesJSONTransformer;
+ (id)bMemberInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
