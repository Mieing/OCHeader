@class NSString;

@interface HardDeviceAttr : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *brandName;
@property (retain, nonatomic) NSString *authKey;
@property (retain, nonatomic) NSString *mac;
@property (retain, nonatomic) NSString *connProto;
@property (nonatomic) unsigned int connStrategy;
@property (nonatomic) unsigned int closeStrategy;
@property (nonatomic) int manuMacPos;
@property (nonatomic) int serMacPos;
@property (retain, nonatomic) NSString *hardDeviceAttrDesc;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *deviceTitle;
@property (retain, nonatomic) NSString *deviceDesc;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) unsigned int deviceTypeMainDevice;
@property (nonatomic) unsigned int isEnterMyDevice;
@property (nonatomic) long long bleSimpleProtocol;
@property (retain, nonatomic) NSString *ability;
@property (retain, nonatomic) NSString *abilityInf;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *subDeviceList;

+ (void)initialize;

- (void)setSubDeviceList:(id)a0;
- (id)subDeviceList;
- (void)setSerialNumber:(id)a0;
- (id)serialNumber;
- (void)setAbilityInf:(id)a0;
- (id)abilityInf;
- (void)setAbility:(id)a0;
- (id)ability;
- (void)setBleSimpleProtocol:(long long)a0;
- (long long)bleSimpleProtocol;
- (void)setIsEnterMyDevice:(unsigned int)a0;
- (unsigned int)isEnterMyDevice;
- (void)setDeviceTypeMainDevice:(unsigned int)a0;
- (unsigned int)deviceTypeMainDevice;
- (void)setCategory:(id)a0;
- (id)category;
- (void)setDeviceDesc:(id)a0;
- (id)deviceDesc;
- (void)setDeviceTitle:(id)a0;
- (id)deviceTitle;
- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setAlias:(id)a0;
- (id)alias;
- (void)setHardDeviceAttrDesc:(id)a0;
- (id)hardDeviceAttrDesc;
- (void)setSerMacPos:(int)a0;
- (int)serMacPos;
- (void)setManuMacPos:(int)a0;
- (int)manuMacPos;
- (void)setCloseStrategy:(unsigned int)a0;
- (unsigned int)closeStrategy;
- (void)setConnStrategy:(unsigned int)a0;
- (unsigned int)connStrategy;
- (void)setConnProto:(id)a0;
- (id)connProto;
- (void)setMac:(id)a0;
- (id)mac;
- (void)setAuthKey:(id)a0;
- (id)authKey;
- (void)setBrandName:(id)a0;
- (id)brandName;

@end
