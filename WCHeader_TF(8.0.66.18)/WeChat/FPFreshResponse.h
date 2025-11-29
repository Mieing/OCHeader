@class NSData, BaseResponse;

@interface FPFreshResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *spamBuff;

+ (void)initialize;

@end
