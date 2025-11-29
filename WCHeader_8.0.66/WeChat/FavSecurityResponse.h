@class BaseResponse;

@interface FavSecurityResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int securityResult;

+ (void)initialize;

@end
