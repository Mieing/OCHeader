@class NSString, FinderMVInfo_FinderMVSongInfo;

@interface MusicLiveGetBeatTrackReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songid;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (nonatomic) unsigned int timeLengthMs;
@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo *songinfo;

+ (void)initialize;

@end
