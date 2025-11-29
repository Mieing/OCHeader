@class BaseRequest, ActionLocation, NSString;

@interface GetRealnameWordingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (retain, nonatomic) NSString *jsapiReqkey;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
