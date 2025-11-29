@class FinderMVInfo_FinderMVSongInfo, NSMutableArray;

@interface MusicLiveGetBeatArrangementReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo;
@property (retain, nonatomic) NSMutableArray *mediaInfoList;

+ (void)initialize;

@end
