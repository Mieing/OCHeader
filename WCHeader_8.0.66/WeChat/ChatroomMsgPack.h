@class NSString, MsgContent, MsgOptions;

@interface ChatroomMsgPack : WXPBGeneratedMessage

@property (nonatomic) int msgType;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *cliMsgId;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) long long sendTime;
@property (retain, nonatomic) MsgContent *msgContent;
@property (retain, nonatomic) MsgOptions *msgOptions;
@property (nonatomic) int msgSubType;
@property (nonatomic) unsigned int channelId;

+ (void)initialize;

@end
