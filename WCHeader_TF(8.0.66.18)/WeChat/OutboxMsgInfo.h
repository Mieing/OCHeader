@class OutboxSendInfo, BizMessage;

@interface OutboxMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BizMessage *msg;
@property (retain, nonatomic) OutboxSendInfo *sendInfo;

+ (void)initialize;

@end
