@class BaseRequest, NSMutableArray;

@interface UpdateRoamDataReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (nonatomic) unsigned long long maxDelOpVersion;
@property (nonatomic) unsigned long long maxRoamDataVersion;
@property (retain, nonatomic) NSMutableArray *addReq;
@property (retain, nonatomic) NSMutableArray *appendReq;
@property (nonatomic) BOOL clearAllData;

+ (void)initialize;

@end
