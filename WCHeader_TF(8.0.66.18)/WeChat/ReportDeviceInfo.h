@class NSString;

@interface ReportDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic) unsigned int device;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (nonatomic) unsigned int screenWidth;
@property (nonatomic) unsigned int screenHeight;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *languageVersion;

+ (void)initialize;

- (void)setLanguageVersion:(id)a0;
- (id)languageVersion;
- (void)setOsVersion:(id)a0;
- (id)osVersion;
- (void)setOsName:(id)a0;
- (id)osName;
- (void)setScreenHeight:(unsigned int)a0;
- (unsigned int)screenHeight;
- (void)setScreenWidth:(unsigned int)a0;
- (unsigned int)screenWidth;
- (void)setDeviceBrand:(id)a0;
- (id)deviceBrand;
- (void)setDeviceModel:(id)a0;
- (id)deviceModel;
- (void)setDevice:(unsigned int)a0;
- (unsigned int)device;
- (void)setManufacturer:(id)a0;
- (id)manufacturer;

@end
