@class MMListenSpringFestivalGalaPlaylistInfo, MMListenSingerRadioShowInfo, MMListenPlaylistExtShowInfo, MMListenBannerInfo, MMListenSongOriginInfo;

@interface MMListenExtShowInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenBannerInfo *bottomBannerInfo;
@property (retain, nonatomic) MMListenSpringFestivalGalaPlaylistInfo *springFestivalGalaPlaylistInfo;
@property (retain, nonatomic) MMListenSingerRadioShowInfo *singerRadioShowInfo;
@property (retain, nonatomic) MMListenPlaylistExtShowInfo *playlistExtShowInfo;
@property (retain, nonatomic) MMListenSongOriginInfo *songOriginInfo;

+ (void)initialize;

@end
