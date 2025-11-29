@class XMSessionCookie, XMBaseReadData, BaseResponse;

@interface XMReadMailRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) XMBaseReadData *readdata;
@property (retain, nonatomic) XMSessionCookie *session;

+ (void)initialize;

@end
