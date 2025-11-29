@class AWETheaterEntranceGuideModel, NSArray, AWELVideoAlbumHistoryInfoModel, AWELVideoMetaBlockInfoModel, AWELVideoAppointmentInfoModel, AWELVideoAlbumInfoModel, AWELVideoSideBarGuideResponse;

@interface AWELongVideoAlbumModel : NSObject

@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfo;
@property (copy, nonatomic) NSArray *episodeList;
@property (nonatomic) long long lastPlayIndex;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *historyInfo;
@property (copy, nonatomic) NSArray *anchorInfoList;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfo;
@property (retain, nonatomic) AWELVideoMetaBlockInfoModel *metaBlockInfo;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *theaterGuideInfo;
@property (retain, nonatomic) AWELVideoSideBarGuideResponse *revisitGuideInfo;

- (void).cxx_destruct;

@end
