@class BaseRequest, NSString;

@interface CheckHoneyUserReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userUsername;
@property (nonatomic) unsigned int cardType;

+ (void)initialize;

@end
