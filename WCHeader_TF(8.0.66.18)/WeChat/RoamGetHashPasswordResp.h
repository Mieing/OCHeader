@class NSData, BaseResponse;

@interface RoamGetHashPasswordResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseresponse;
@property (retain, nonatomic) NSData *hashPassword;

+ (void)initialize;

@end
