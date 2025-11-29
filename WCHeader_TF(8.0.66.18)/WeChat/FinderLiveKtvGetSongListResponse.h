@class FinderLiveKtvSongListInfo, FinderLiveKtvPlayCountInfo, BaseResponse;

@interface FinderLiveKtvGetSongListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveKtvSongListInfo *songListInfo;
@property (nonatomic) unsigned int firstSongVersion;
@property (nonatomic) unsigned int selfLastestSongIndex;
@property (retain, nonatomic) FinderLiveKtvPlayCountInfo *playCountInfo;

+ (void)initialize;

@end
