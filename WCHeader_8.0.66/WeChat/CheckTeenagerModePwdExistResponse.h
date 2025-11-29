@class BaseResponse;

@interface CheckTeenagerModePwdExistResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isPwdExist;
@property (nonatomic) BOOL isNeverUse;

+ (void)initialize;

@end
