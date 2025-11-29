@class NSString, NSMutableArray, NSMutableDictionary;

@interface WePkgUpdateConfigExt : MMObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *currentEnabledVersion;
@property (retain, nonatomic) NSString *currentPkgMd5;
@property (nonatomic) unsigned int lastUnusedSeconds;
@property (nonatomic) unsigned int checkIntervalSeconds;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int pkgSizeInBytes;
@property (nonatomic) BOOL isReadyForOperation;
@property (nonatomic) BOOL isClearAllPkgExceptCurrentEnabledVersion;
@property (retain, nonatomic) NSString *checkResponseMd5;
@property (nonatomic) unsigned int bigPackagedownloadNetworkType;
@property (nonatomic) unsigned int atomicSingleFileTotalCount;
@property (retain, nonatomic) NSMutableArray *atomicSingleFileListNeedDownload;
@property (retain, nonatomic) NSMutableArray *atomicSingleFileListDownloadSuccessed;
@property (retain, nonatomic) NSString *charSet;
@property (retain, nonatomic) NSMutableDictionary *file2DownloadFailCount;
@property (nonatomic) unsigned int checkUpdateSuccessTime;
@property (nonatomic) BOOL bigPackageDownloadSuccess;
@property (nonatomic) unsigned int controlCommand;
@property (nonatomic) BOOL isPatchDownloadSuccess;
@property (retain, nonatomic) NSString *patchMd5;
@property (retain, nonatomic) NSString *patchDownloadUrl;
@property (nonatomic) unsigned int patchDownloadNetworkType;
@property (nonatomic) unsigned int patchSizeInBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_currentEnabledVersion;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_isReadyForOperation;
+ (void)PBArrayAdd_isClearAllPkgExceptCurrentEnabledVersion;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_bigPackagedownloadNetworkType;
+ (void)PBArrayAdd_atomicSingleFileTotalCount;
+ (void)PBArrayAdd_atomicSingleFileListNeedDownload;
+ (void)PBArrayAdd_atomicSingleFileListDownloadSuccessed;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_file2DownloadFailCount;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_bigPackageDownloadSuccess;
+ (void)PBArrayAdd_controlCommand;
+ (void)PBArrayAdd_patchDownloadUrl;
+ (void)PBArrayAdd_patchMd5;
+ (void)PBArrayAdd_patchDownloadNetworkType;
+ (void)PBArrayAdd_patchSizeInBytes;
+ (void)PBArrayAdd_isPatchDownloadSuccess;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
