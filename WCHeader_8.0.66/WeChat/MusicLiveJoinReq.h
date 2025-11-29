@class NSString, FinderMVInfo_FinderMVSongInfo;

@interface MusicLiveJoinReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songid;
@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo;

+ (void)initialize;

@end
