@class NSString, BaseResponse;

@interface AddPlanResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
