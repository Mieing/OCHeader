@class NSString, BaseResponse;

@interface LogOutResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *noPwdLoginTicket;

+ (void)initialize;

@end
