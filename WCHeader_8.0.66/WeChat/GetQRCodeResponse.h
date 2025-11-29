@class BaseResponse, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface GetQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *qrcode;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *footerWording;
@property (retain, nonatomic) NSString *revokeQrcodeId;
@property (retain, nonatomic) NSString *revokeQrcodeWording;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (nonatomic) int dominatorColorSize;
@property (retain, nonatomic) NSMutableArray *dominatorColor;
@property (nonatomic) unsigned int qrcodeStatus;

+ (void)initialize;

@end
