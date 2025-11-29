@class NSString, TingTapeItem, TingItem, NSMutableArray;

@interface TingMusicChatSessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) TingItem *lastPlayItem;
@property (nonatomic) BOOL hasPlayOpening;
@property (retain, nonatomic) NSMutableArray *historyTtsplayListenIds;
@property (retain, nonatomic) TingTapeItem *lastTapeItem;
@property (nonatomic) BOOL isPlayTaskPlayingWhileActive;
@property (nonatomic) int originalPlayMode;
@property (nonatomic) BOOL hasPlayTts;

+ (void)initialize;

@end
