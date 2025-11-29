@class NSString;

@interface RequestPackageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) unsigned int versionType;

+ (void)initialize;

- (void)setVersionType:(unsigned int)a0;
- (unsigned int)versionType;
- (void)setPackageType:(unsigned int)a0;
- (unsigned int)packageType;
- (void)setModuleName:(id)a0;
- (id)moduleName;
- (void)setUsername:(id)a0;
- (id)username;
- (void)setAppid:(id)a0;
- (id)appid;

@end
