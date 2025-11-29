@class BaseRequest, NSString, NSData, SpeedTestAddr;

@interface SpeedTestReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *ctx;
@property (retain, nonatomic) NSString *networkType;
@property (retain, nonatomic) NSString *networkInfo;
@property (retain, nonatomic) NSString *deviceInfo;
@property (nonatomic) unsigned int connTime;
@property (nonatomic) unsigned int connRetcode;
@property (nonatomic) unsigned int transTime;
@property (nonatomic) int transRetcode;
@property (retain, nonatomic) SpeedTestAddr *serverAddr;
@property (retain, nonatomic) SpeedTestAddr *clientAddr;

+ (void)initialize;

@end
