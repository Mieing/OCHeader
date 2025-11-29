@class SafetyInfo, BaseResponse;

@interface GetSafetyInfoRespsonse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SafetyInfo *info;

+ (void)initialize;

@end
