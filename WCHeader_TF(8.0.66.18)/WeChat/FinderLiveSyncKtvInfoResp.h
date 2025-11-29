@class NSMutableArray, FinderLiveKtvPlayerWaitList;

@interface FinderLiveSyncKtvInfoResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int firstSongVersion;
@property (nonatomic) unsigned long long songListVersion;
@property (retain, nonatomic) NSMutableArray *songInfoList;
@property (retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList;
@property (nonatomic) unsigned int selfWaitSongSize;
@property (nonatomic) unsigned int stayTrtcRoomTimeAfterStopSinging;
@property (nonatomic) unsigned int allWaitSongSize;

+ (void)initialize;

@end
