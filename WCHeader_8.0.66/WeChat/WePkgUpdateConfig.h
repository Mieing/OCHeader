@class NSString, NSMutableArray, NSMutableDictionary;

@interface WePkgUpdateConfig : MMObject

@property (retain, nonatomic) NSString *nsPkgId;
@property (retain, nonatomic) NSString *nsAppId;
@property (nonatomic) unsigned int uiPkgType;
@property (retain, nonatomic) NSString *nsEnteranceDomain;
@property (retain, nonatomic) NSString *nsCurrentEnabledVersion;
@property (nonatomic) unsigned int uiLastUnusedSeconds;
@property (nonatomic) unsigned int uiCheckIntervalSeconds;
@property (nonatomic) BOOL bClearAllPkgExceptCurrentEnabledVersion;
@property (nonatomic) BOOL bIsReadyForOperation;
@property (retain, nonatomic) NSString *nsCheckResonseMd5;
@property (retain, nonatomic) NSString *nsCharSet;
@property (nonatomic) unsigned int uiCheckUpdateSuccessTime;
@property (nonatomic) unsigned int controlCommand;
@property (retain, nonatomic) NSString *nsBigPackageMd5;
@property (retain, nonatomic) NSString *nsBigPackageDownloadUrl;
@property (nonatomic) unsigned int uiBigPackageDownloadNetworkType;
@property (nonatomic) unsigned int uiBigPackageSizeInBytes;
@property (nonatomic) BOOL bBigPackageDownloadSuccess;
@property (nonatomic) BOOL isPatchDownloadSuccess;
@property (retain, nonatomic) NSString *patchMd5;
@property (retain, nonatomic) NSString *patchDownloadUrl;
@property (nonatomic) unsigned int patchDownloadNetworkType;
@property (nonatomic) unsigned int patchSizeInBytes;
@property (nonatomic) unsigned int uiAtomicSingleFileTotalCount;
@property (retain, nonatomic) NSMutableArray *atomicSingleFileListNeedDownload;
@property (retain, nonatomic) NSMutableArray *atomicSingleFileListDownloadSuccessed;
@property (retain, nonatomic) NSMutableDictionary *file2DownloadFailCount;

+ (id)updateConfigFromTableItem:(id)a0;

- (id)generateTableItem;
- (BOOL)shouldReadyForUpdate;
- (id)debugDescription;
- (void).cxx_destruct;

@end
