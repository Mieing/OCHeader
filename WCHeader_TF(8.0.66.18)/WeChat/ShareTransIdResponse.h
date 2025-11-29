@class NSString, WxaBusinessBaseResponse, BaseResponse;

@interface ShareTransIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaBusinessBaseResponse *businessResp;
@property (retain, nonatomic) NSString *username;

+ (void)initialize;

@end
