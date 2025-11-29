@class MusicLiveMsgPack, FinderMVInfo_FinderMVSongInfo;

@interface MusicLivePostLiveMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) MusicLiveMsgPack *msg;
@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo;

+ (void)initialize;

@end
