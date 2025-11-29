@class NSMutableArray, BaseResponse;

@interface MmecBatchGetShopCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *shops;

+ (void)initialize;

@end
