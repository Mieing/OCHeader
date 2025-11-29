@class BaseRequest, NSString;

@interface BizInfoExtReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *bizUserName;

+ (void)initialize;

@end
