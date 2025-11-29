@class NSString, BaseResponse;

@interface ThirdAppVerifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *thirdAppAuthTicket;

+ (void)initialize;

@end
