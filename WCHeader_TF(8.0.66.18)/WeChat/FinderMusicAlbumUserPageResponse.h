@class FinderMusicAlbumUserPageResponse_MusicPatch, FinderMusicStatisticsInfo, FinderMusicBaikeSummary, FinderMusicAlbumUserPageResponse_AlbumPatch, FinderMusicAlbumUserPageResponse_SonglistPatch, FinderLiteAppParam, BaseResponse;

@interface FinderMusicAlbumUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderMusicAlbumUserPageResponse_MusicPatch *musicPatch;
@property (retain, nonatomic) FinderMusicAlbumUserPageResponse_AlbumPatch *albumPatch;
@property (retain, nonatomic) FinderMusicAlbumUserPageResponse_SonglistPatch *songlistPatch;
@property (retain, nonatomic) FinderMusicBaikeSummary *summary;
@property (retain, nonatomic) FinderMusicStatisticsInfo *statisticsInfo;
@property (nonatomic) unsigned long long ctrlFlag;
@property (retain, nonatomic) FinderLiteAppParam *liteAppParam;
@property (retain, nonatomic) FinderLiteAppParam *musicManageLiteAppParam;

+ (void)initialize;

@end
