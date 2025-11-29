@class BaseRequest, NSString;

@interface AACloseNotifyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *groupid;

+ (void)initialize;

@end
