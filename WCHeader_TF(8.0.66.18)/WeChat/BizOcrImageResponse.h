@class BankCardResult, BaseResponse;

@interface BizOcrImageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BankCardResult *bankcardRes;

+ (void)initialize;

@end
