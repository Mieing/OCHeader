@class NSString, MMListenItem;

@interface MMListenMusicChatPlayRequest_ChatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatText;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) NSString *recommendId;
@property (retain, nonatomic) NSString *asrListenId;
@property (nonatomic) int chatType;
@property (nonatomic) BOOL isContinuousConversation;

+ (void)initialize;

@end
