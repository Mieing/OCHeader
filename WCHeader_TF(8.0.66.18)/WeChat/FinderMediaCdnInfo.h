@class NSString;

@interface FinderMediaCdnInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *cdnBackupUrl;
@property (nonatomic) unsigned int cdnEnableQuic;
@property (retain, nonatomic) NSString *pcdnUrl;
@property (nonatomic) int netType;
@property (nonatomic) unsigned long long validTimestamp;
@property (nonatomic) int isAccessUgc;
@property (retain, nonatomic) NSString *cdnSocIp;
@property (retain, nonatomic) NSString *cdnSocHost;
@property (nonatomic) BOOL enablePcdn;
@property (nonatomic) unsigned int beginUsePcdnBufferSeconds;
@property (nonatomic) unsigned int exitUsePcdnBufferSeconds;
@property (nonatomic) unsigned int preloadBeginUsePcdnBufferKbytes;
@property (nonatomic) unsigned int pcdnTimeoutRetryCount;
@property (nonatomic) unsigned int marsPreDownloadKbytes;
@property (nonatomic) BOOL isUseUgcWhenNoPreload;
@property (nonatomic) BOOL isCheckCrc;
@property (nonatomic) BOOL isUseCronet;
@property (nonatomic) BOOL preloadUsePcdnOnly;
@property (nonatomic) unsigned int preloadPcdnConnections;
@property (nonatomic) BOOL socForceUseH3;

+ (void)initialize;

@end
