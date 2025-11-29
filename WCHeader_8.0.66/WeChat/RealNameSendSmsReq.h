@class BaseRequest, NSString;

@interface RealNameSendSmsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *mobileNo;
@property (retain, nonatomic) NSString *mobileArea;
@property (nonatomic) unsigned int isRetry;
@property (retain, nonatomic) NSString *reqKey;

+ (void)initialize;

@end
