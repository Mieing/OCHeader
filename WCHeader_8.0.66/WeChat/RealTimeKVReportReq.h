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

- (void)setValue:(id)a0;
- (id)value;
- (void)setLogId:(unsigned int)a0;
- (unsigned int)logId;
- (void)setLanguageVer:(id)a0;
- (id)languageVer;
- (void)setOsVersion:(id)a0;
- (id)osVersion;
- (void)setOsName:(id)a0;
- (id)osName;
- (void)setDeviceBrand:(id)a0;
- (id)deviceBrand;
- (void)setDeviceModel:(id)a0;
- (id)deviceModel;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
