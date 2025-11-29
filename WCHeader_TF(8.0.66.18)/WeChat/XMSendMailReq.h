@class XMBaseSendMailData;

@interface XMSendMailReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uin;
@property (retain, nonatomic) XMBaseSendMailData *senddata;

+ (void)initialize;

@end
