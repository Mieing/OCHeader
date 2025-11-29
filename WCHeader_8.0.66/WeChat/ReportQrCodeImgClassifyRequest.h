@class BaseRequest, NSString;

@interface ReportQrCodeImgClassifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int qrCodeType;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int color;
@property (retain, nonatomic) NSString *colorScore;
@property (nonatomic) int cls;
@property (retain, nonatomic) NSString *clsScore;
@property (retain, nonatomic) NSString *ocrText;

+ (void)initialize;

@end
