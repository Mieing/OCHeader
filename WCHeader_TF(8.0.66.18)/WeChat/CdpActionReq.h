@class BaseRequest, NSString, NSMutableArray;

@interface CdpActionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *cmdId;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSMutableArray *cdpResponse;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;

+ (void)initialize;

@end
