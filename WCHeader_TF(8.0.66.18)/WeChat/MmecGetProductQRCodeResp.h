@class NSString, BaseResponse;

@interface MmecGetProductQRCodeResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *qrcodeUrl;

+ (void)initialize;

@end
