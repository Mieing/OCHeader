@class NSString;

@interface GetBotChatHistoryResponse_ActiveChat : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *singleChatHumanUsername;
@property (nonatomic) unsigned long long singleChatHumanUin;
@property (nonatomic) unsigned long long voipRoomId;
@property (retain, nonatomic) NSString *voipGroupId;

+ (void)initialize;

@end
