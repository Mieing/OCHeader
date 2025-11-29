@class NSData, BaseResponse;

@interface GetWxaSunCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *qrcodeImgBase64;

+ (void)initialize;

@end
