@class BaseRequest, ActionLocation;

@interface GetPayUserDutyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) ActionLocation *actionLocation;

+ (void)initialize;

@end
