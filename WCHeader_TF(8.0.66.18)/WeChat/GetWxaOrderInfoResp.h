@class BaseResponse;

@interface GetWxaOrderInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL showRedSpots;

+ (void)initialize;

@end
