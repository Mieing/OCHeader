@class FinderLiveKtvSongInfo, NSMutableArray, FinderLiveKtvPlayerWaitList;

@interface FinderLiveAppMsgKtvSongListChangeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int modType;
@property (retain, nonatomic) NSMutableArray *songInfoList;
@property (nonatomic) unsigned int firstSongVersion;
@property (retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList;
@property (nonatomic) unsigned long long songListVersion;
@property (retain, nonatomic) FinderLiveKtvSongInfo *changeSongInfo;

+ (void)initialize;

@end
