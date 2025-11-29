@class BaseRequest, NSString;

@interface RealTimeKVReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *languageVer;
@property (nonatomic) unsigned int logId;
@property (retain, nonatomic) NSString *value;

+ (void)initialize;

@end
