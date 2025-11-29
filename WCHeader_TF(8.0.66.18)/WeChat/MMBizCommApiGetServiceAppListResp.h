@class NSMutableArray, BaseResponse;

@interface MMBizCommApiGetServiceAppListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *serviceAppinfo;

+ (void)initialize;

@end
