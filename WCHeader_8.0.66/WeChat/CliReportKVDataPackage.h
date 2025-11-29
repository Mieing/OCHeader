@class NSString, NSMutableArray;

@interface CliReportKVDataPackage : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int clientVersion;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *languageVer;
@property (nonatomic) unsigned int datatype;

+ (void)initialize;

- (void)setDatatype:(unsigned int)a0;
- (unsigned int)datatype;
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
- (void)setItemList:(id)a0;
- (id)itemList;
- (void)setNetType:(unsigned int)a0;
- (unsigned int)netType;
- (void)setClientVersion:(unsigned int)a0;
- (unsigned int)clientVersion;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;

@end
