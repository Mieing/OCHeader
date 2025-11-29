@class WAPackageDownloadProtocolInfo, NSString;

@interface WAReportPackageDownloadDetailInfoItem : WAReportBaseItem

@property (retain, nonatomic) WAPackageDownloadProtocolInfo *detail;
@property (nonatomic) unsigned long long costTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (copy, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned long long packageType;
@property (nonatomic) unsigned long long localAppVersion;
@property (nonatomic) unsigned long long downloadAppVersion;
@property (nonatomic) BOOL isPatch;
@property (nonatomic) unsigned long long compressType;
@property (nonatomic) unsigned long long encryptVersion;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) unsigned int downloadPkgSize;
@property (nonatomic) unsigned int decompressTime;
@property (nonatomic) unsigned int decompressPkgSize;
@property (nonatomic) unsigned int errCode;
@property (copy, nonatomic) NSString *finalPkgMd5;
@property (nonatomic) unsigned int dnsType;
@property (nonatomic) unsigned int requestSourceSyncType;
@property (nonatomic) unsigned int requestSourceIsPreHot;
@property (nonatomic) unsigned int requestSourceLaunchFlag;
@property (nonatomic) unsigned long long applyPatchBeginTimeInMs;
@property (nonatomic) unsigned long long applyPatchEndTimeInMs;
@property (nonatomic) unsigned long long checkSumVerifyBeginTimeInMs;
@property (nonatomic) unsigned long long checkSumVerifyEndTimeInMs;
@property (nonatomic) unsigned long long downloadComponentType;
@property (copy, nonatomic) NSString *xCacheLoopUp;
@property (nonatomic) unsigned long long DNSCost;
@property (nonatomic) unsigned long long connectCost;
@property (nonatomic) unsigned long long SSLconnectionCost;
@property (nonatomic) unsigned long long requestCost;
@property (nonatomic) unsigned long long responseCost;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
