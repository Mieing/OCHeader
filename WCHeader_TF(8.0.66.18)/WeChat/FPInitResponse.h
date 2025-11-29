@class NSData, BaseResponse;

@interface FPInitResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *spamBuff;

+ (void)initialize;

@end
