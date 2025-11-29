@class NSMutableArray, BaseResponse;

@interface MMBizCommApiGetServiceAppListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *serviceAppinfo;

+ (void)initialize;

- (void)setServiceAppinfo:(id)a0;
- (id)serviceAppinfo;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
