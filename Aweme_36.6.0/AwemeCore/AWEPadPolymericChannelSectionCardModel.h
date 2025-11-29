@class AWEPadPolymericCampaignModel, AWEPadPMCAlbumHistoryModel, AWEPadPMCAlbumCardModel, NSDictionary, AWEPadPMCSeriesCardModel, NSString, AWEPadLiveBookingModel, AWEPadPMCEpisodeHistoryModel, AWEPadPMCEpisodeCardModel, AWEAwemeModel, AWEPadPMCCardExtraModel, AWEPadPMCSeriesHistoryModel, AWEPadPolymericChannelAlbum;

@interface AWEPadPolymericChannelSectionCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cardStyle;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) AWEPadPMCEpisodeCardModel *episodeModel;
@property (retain, nonatomic) AWEPadPMCSeriesCardModel *seriesModel;
@property (retain, nonatomic) AWEPadPMCAlbumCardModel *videoAlbumModel;
@property (retain, nonatomic) NSString *episodeProtoStruct;
@property (retain, nonatomic) NSDictionary *seriesStruct;
@property (retain, nonatomic) NSDictionary *albumStruct;
@property (retain, nonatomic) AWEPadPMCCardExtraModel *extraInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEPadPolymericChannelAlbum *albumModel;
@property (retain, nonatomic) AWEPadPolymericCampaignModel *campaignModel;
@property (retain, nonatomic) AWEPadPMCEpisodeHistoryModel *episodeHistoryModel;
@property (retain, nonatomic) AWEPadPMCSeriesHistoryModel *seriesHistoryModel;
@property (retain, nonatomic) AWEPadPMCAlbumHistoryModel *albumHistoryModel;
@property (retain, nonatomic) AWEPadLiveBookingModel *liveBookingModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeModelJSONTransformer;
+ (id)extraInfoJSONTransformer;
+ (id)albumModelJSONTransformer;
+ (id)seriesModelJSONTransformer;
+ (id)campaignModelJSONTransformer;
+ (id)liveBookingModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
