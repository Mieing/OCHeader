@class NSString, FinderLiveKtvSongPlayInfo, FinderLiveContact;

@interface FinderLiveKtvSongInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songMid;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned int songAddTime;
@property (nonatomic) unsigned int songPlayTime;
@property (nonatomic) unsigned int songFinishTime;
@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL pause;
@property (retain, nonatomic) FinderLiveKtvSongPlayInfo *playInfo;
@property (retain, nonatomic) NSString *level;
@property (nonatomic) unsigned int score;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (nonatomic) unsigned int songConfirmPlayTime;
@property (nonatomic) unsigned int supportFlag;

+ (void)initialize;

@end
