@class BaseRequest, NSMutableArray;

@interface BatchSyncVersionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqInfoList;

+ (void)initialize;

@end
