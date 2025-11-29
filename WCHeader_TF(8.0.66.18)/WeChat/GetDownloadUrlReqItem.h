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

@end
