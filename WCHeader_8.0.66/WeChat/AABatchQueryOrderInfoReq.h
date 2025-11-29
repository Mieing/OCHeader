@class BaseRequest, NSMutableArray, NSString;

@interface AABatchQueryOrderInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *billNoList;
@property (retain, nonatomic) NSString *groupid;

+ (void)initialize;

@end
