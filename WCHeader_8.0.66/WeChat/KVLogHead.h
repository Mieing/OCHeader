@class NSString;

@interface KVLogHead : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *languageVer;
@property (nonatomic) unsigned int sendTime;

+ (void)initialize;

- (void)setSendTime:(unsigned int)a0;
- (unsigned int)sendTime;
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

@end
