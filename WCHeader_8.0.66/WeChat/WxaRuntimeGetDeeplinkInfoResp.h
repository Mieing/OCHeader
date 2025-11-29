@class NSData, BaseResponse;

@interface WxaRuntimeGetDeeplinkInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSData *respData;

+ (void)initialize;

@end
