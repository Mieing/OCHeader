@class NSMutableArray;

@interface MMListenChatRoomInfo : WXPBGeneratedMessage

@property (nonatomic) int playingState;
@property (nonatomic) unsigned long long startTimestamp;
@property (retain, nonatomic) NSMutableArray *announcementList;

+ (void)initialize;

@end
