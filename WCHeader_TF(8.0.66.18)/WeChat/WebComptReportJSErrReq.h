@class BaseRequest, NSString;

@interface WebComptReportJSErrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *errStack;
@property (nonatomic) unsigned int errLine;
@property (nonatomic) unsigned int errCol;
@property (retain, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSString *refer;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *comptName;
@property (retain, nonatomic) NSString *libVersion;
@property (retain, nonatomic) NSString *bizUrl;
@property (retain, nonatomic) NSString *bizMd5;

+ (void)initialize;

@end
