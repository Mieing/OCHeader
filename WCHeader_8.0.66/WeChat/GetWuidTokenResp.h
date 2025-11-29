@class NSString, BaseResponse;

@interface GetWuidTokenResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned long long expire;

+ (void)initialize;

@end
