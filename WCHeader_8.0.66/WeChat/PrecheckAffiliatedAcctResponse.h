@class NSString, BaseResponse;

@interface PrecheckAffiliatedAcctResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
