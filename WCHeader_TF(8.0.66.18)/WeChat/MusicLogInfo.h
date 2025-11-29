@class NSString;

@interface MusicLogInfo : NSObject

@property (nonatomic) unsigned int playerType;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *musicTitle;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int musicDuaration;
@property (nonatomic) unsigned int duarationToPlay;
@property (nonatomic) unsigned int duarationOnForeground;
@property (nonatomic) BOOL bTakeScreenShotAtFirstPage;
@property (nonatomic) BOOL bTakeScreenShotAtFullLyricPage;
@property (nonatomic) unsigned int musicPlayerEntranceType;
@property (nonatomic) BOOL bSwipeToNext;
@property (nonatomic) BOOL bSwipeToPrevious;
@property (nonatomic) unsigned int playModeWhenStop;
@property (nonatomic) BOOL bShowFullLyricPage;
@property (nonatomic) BOOL bShowFirstPage;
@property (nonatomic) BOOL bEasterEggToPlayAll;
@property (nonatomic) BOOL bEasterEggToPlayOne;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *brandMusicId;
@property (nonatomic) unsigned int lastPlayTime;
@property (nonatomic) unsigned int realPlayTime;
@property (retain, nonatomic) NSString *reportStr;

- (id)init;
- (void)resetLogStat;
- (void)resetMusicPlayerEntranceType;
- (id)genLogInfo;
- (id)genLogInfo13044;
- (BOOL)hasSwiped;
- (BOOL)hasSildeVertical;
- (void).cxx_destruct;

@end
