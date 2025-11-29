@class NSString, BaseResponse;

@interface XMSendMailRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *messageid;

+ (void)initialize;

@end
