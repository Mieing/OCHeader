@class NSString, NSMutableArray, BaseResponse;

@interface QryAutoPlanOrderListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *succWithholdStatisticsWording;
@property (retain, nonatomic) NSMutableArray *planOrderList;

+ (void)initialize;

@end
