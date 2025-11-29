@class BaseRequest, NSMutableArray;

@interface AddDelOpReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (nonatomic) unsigned long long maxDelOpVersion;
@property (nonatomic) unsigned long long maxRoamDataVersion;
@property (retain, nonatomic) NSMutableArray *delOp;

+ (void)initialize;

@end
