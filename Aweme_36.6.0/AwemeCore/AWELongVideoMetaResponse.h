@class AWETheaterEntranceGuideModel, NSArray, AWELVideoMetaBlockInfoModel, AWELVideoAppointmentInfoModel, AWELVideoAlbumInfoModel, AWELVideoSideBarGuideResponse;

@interface AWELongVideoMetaResponse : AWEBaseApiModel

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfo;
@property (retain, nonatomic) AWELVideoMetaBlockInfoModel *blockInfo;
@property (copy, nonatomic) NSArray *episodeList;
@property (copy, nonatomic) NSArray *albumList;
@property (copy, nonatomic) NSArray *entranceInfoList;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *theaterGuideInfo;
@property (retain, nonatomic) AWELVideoSideBarGuideResponse *revistGuideConfig;

+ (id)albumInfoJSONTransformer;
+ (id)episodeListJSONTransformer;
+ (id)albumListJSONTransformer;
+ (id)entranceInfoListJSONTransformer;
+ (id)appointmentInfoJSONTransformer;
+ (id)blockInfoJSONTransformer;
+ (id)theaterGuideInfoJSONTransformer;
+ (id)revistGuideConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
