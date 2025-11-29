@class NSData, BaseResponse;

@interface GetILinkAuthCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ilinkAuthCode;
@property (retain, nonatomic) NSData *clientInfo;

+ (void)initialize;

@end
