@class MMListenItem, NSString;

@interface MMListenMusicChatRoomInfo_PlayingItemInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenItem *listenItem;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL isFromAiHelper;
@property (retain, nonatomic) NSString *uuid;

+ (void)initialize;

@end
