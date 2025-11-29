@class BaseRequest, NSString;

@interface GetWXUserNameReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *wxGroupInfo;

+ (void)initialize;

@end
