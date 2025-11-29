@class NSData, NSString, BaseResponse;

@interface FinderQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *qrcode;
@property (retain, nonatomic) NSString *qrcodeUrl;

+ (void)initialize;

@end
