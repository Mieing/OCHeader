@class BaseRequest, NSString;

@interface BizScanProductReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *languageVer;
@property (nonatomic) unsigned int logId;
@property (retain, nonatomic) NSString *logExt;
@property (retain, nonatomic) NSString *productid;
@property (retain, nonatomic) NSString *statid;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int showtype;

+ (void)initialize;

@end
