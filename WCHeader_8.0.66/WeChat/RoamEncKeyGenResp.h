@class RoamEnc, BaseResponse;

@interface RoamEncKeyGenResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RoamEnc *enc;

+ (void)initialize;

@end
