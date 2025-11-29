@class MMListenItem;

@interface TingDailyPlaylistConsumeInfo : WXPBGeneratedMessage

@property (nonatomic) int consumeType;
@property (retain, nonatomic) MMListenItem *lastPlayItem;
@property (nonatomic) int index;

+ (void)initialize;

@end
