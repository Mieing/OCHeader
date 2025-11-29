@class BaseRequest, NSString;

@interface GetPassKeyUserInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *verifyId;
@property (retain, nonatomic) NSString *verifyPasswordTicket;

+ (void)initialize;

@end
