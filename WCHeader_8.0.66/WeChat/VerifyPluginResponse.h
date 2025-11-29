@class NSString, BaseResponse;

@interface VerifyPluginResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonResp;

+ (void)initialize;

@end
