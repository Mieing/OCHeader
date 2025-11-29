@class AffBizMessage, AffOutboxSendInfo;

@interface AffOutboxMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) AffBizMessage *msg;
@property (retain, nonatomic) AffOutboxSendInfo *sendInfo;

+ (void)initialize;

@end
