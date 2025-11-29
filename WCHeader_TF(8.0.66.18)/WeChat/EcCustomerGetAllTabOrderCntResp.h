@class NSMutableArray, BaseResponse;

@interface EcCustomerGetAllTabOrderCntResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *cnts;

+ (void)initialize;

@end
