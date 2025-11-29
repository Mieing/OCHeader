@class NSString, MMListenMusicChatPlayResponse, TingItem;

@interface TingMusicChatAction : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenMusicChatPlayResponse *chatPlayInfo;
@property (retain, nonatomic) TingItem *playingItem;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
