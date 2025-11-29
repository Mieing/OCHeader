@class NSMutableArray, WxaBusinessBaseResponse, BaseResponse;

@interface GetWeappListByLocationResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaBusinessBaseResponse *businessResp;
@property (retain, nonatomic) NSMutableArray *weappList;

+ (void)initialize;

@end
