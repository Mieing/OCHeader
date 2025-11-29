@class BaseRequest, NSString;

@interface ScanQrcodeEventReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int qrcodeType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *ocr;
@property (nonatomic) int color;
@property (retain, nonatomic) NSString *colorScore;
@property (nonatomic) int cls;
@property (retain, nonatomic) NSString *clsScore;

+ (void)initialize;

@end
