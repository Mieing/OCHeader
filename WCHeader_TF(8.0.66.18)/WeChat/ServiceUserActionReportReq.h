@class BaseRequest, NSString;

@interface ServiceUserActionReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizusername;
@property (nonatomic) unsigned int action;

+ (void)initialize;

@end
