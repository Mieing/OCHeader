@class NSMutableArray, BaseResponse;

@interface MmecBatchGetProductCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *products;

+ (void)initialize;

@end
