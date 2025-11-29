@class LocalPackageInfo, NSString, RequestPackageInfo;

@interface GetDownloadUrlReqItem : WXPBGeneratedMessage

@property (retain, nonatomic) RequestPackageInfo *reqPackageInfo;
@property (retain, nonatomic) LocalPackageInfo *localPackageInfo;
@property (nonatomic) unsigned int supportedEncryptVersion;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) BOOL needLatestVersion;
@property (nonatomic) BOOL needZstd;
@property (nonatomic) unsigned int devUin;
@property (retain, nonatomic) NSString *versionDesc;
@property (retain, nonatomic) NSString *needBackupDomain;
@property (retain, nonatomic) NSString *semverVersion;

+ (void)initialize;

- (void)setSemverVersion:(id)a0;
- (id)semverVersion;
- (void)setNeedBackupDomain:(id)a0;
- (id)needBackupDomain;
- (void)setVersionDesc:(id)a0;
- (id)versionDesc;
- (void)setDevUin:(unsigned int)a0;
- (unsigned int)devUin;
- (void)setNeedZstd:(BOOL)a0;
- (BOOL)needZstd;
- (void)setNeedLatestVersion:(BOOL)a0;
- (BOOL)needLatestVersion;
- (void)setAppVersion:(unsigned int)a0;
- (unsigned int)appVersion;
- (void)setSupportedEncryptVersion:(unsigned int)a0;
- (unsigned int)supportedEncryptVersion;
- (void)setLocalPackageInfo:(id)a0;
- (id)localPackageInfo;
- (void)setReqPackageInfo:(id)a0;
- (id)reqPackageInfo;

@end
