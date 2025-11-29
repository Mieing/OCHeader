@class NSString, FinderMVInfo_FinderMVSongInfo;

@interface MusicLiveGetSongStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songid;
@property (retain, nonatomic) NSString *musicAppid;
@property (retain, nonatomic) NSString *musicWeburl;
@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo;

+ (void)initialize;

@end
