@class BaseRequest, NSString;

@interface GetAppTicketRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *signature;

+ (void)initialize;

@end
