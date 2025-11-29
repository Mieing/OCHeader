@class FinderLiveKtvSongInfo;

@interface FinderLiveAppMsgKtvCurrentSongInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveKtvSongInfo *songInfo;
@property (nonatomic) unsigned int firstSongVersion;
@property (retain, nonatomic) FinderLiveKtvSongInfo *nextSongInfo;

+ (void)initialize;

@end
