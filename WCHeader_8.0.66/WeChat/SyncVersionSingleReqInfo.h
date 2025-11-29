@class NSString;

@interface SyncVersionSingleReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wxaUserName;
@property (nonatomic) unsigned int localAppVersion;
@property (nonatomic) unsigned int codePackageVersion;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *appId;

+ (void)initialize;

- (void)setAppId:(id)a0;
- (id)appId;
- (void)setPath:(id)a0;
- (id)path;
- (void)setCodePackageVersion:(unsigned int)a0;
- (unsigned int)codePackageVersion;
- (void)setLocalAppVersion:(unsigned int)a0;
- (unsigned int)localAppVersion;
- (void)setWxaUserName:(id)a0;
- (id)wxaUserName;

@end
