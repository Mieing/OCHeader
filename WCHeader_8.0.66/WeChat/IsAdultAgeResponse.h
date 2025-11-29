@class BaseResponse;

@interface IsAdultAgeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int adultRet;

+ (void)initialize;

@end
