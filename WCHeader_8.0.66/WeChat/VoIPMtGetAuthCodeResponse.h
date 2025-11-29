@class NSData, BaseResponse;

@interface VoIPMtGetAuthCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ilink3RdappAuthCode;
@property (retain, nonatomic) NSData *clientInfo;

+ (void)initialize;

@end
