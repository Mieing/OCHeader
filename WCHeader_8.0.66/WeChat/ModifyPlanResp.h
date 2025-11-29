@class NSString, BaseResponse;

@interface ModifyPlanResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
