@class BaseRequest, NSData;

@interface CgiApplyQrcodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *saveNotifyInfo;

+ (void)initialize;

@end
