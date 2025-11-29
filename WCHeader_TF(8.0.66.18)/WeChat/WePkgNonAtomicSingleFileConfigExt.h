@class NSString, NSMutableArray, NSMutableDictionary;

@interface WePkgNonAtomicSingleFileConfigExt : MMObject <PBCoding, WCTColumnCoding>

@property (nonatomic) BOOL isReadyForOperationAfterCheckUpdate;
@property (nonatomic) BOOL isClearAllPkgExceptCurrentEnabledVersion;
@property (nonatomic) unsigned int lastUnusedSeconds;
@property (nonatomic) unsigned int checkIntervalSeconds;
@property (retain, nonatomic) NSString *checkResponseMd5;
@property (nonatomic) unsigned int nonAtomicSingleFileCount;
@property (retain, nonatomic) NSMutableArray *nonAtomicSingleFileListNeedDownload;
@property (retain, nonatomic) NSMutableArray *nonAtomicSingleFileListDownloadSuccessed;
@property (retain, nonatomic) NSMutableDictionary *file2DownloadFailCount;
@property (nonatomic) unsigned int checkUpdateSuccessTime;
@property (nonatomic) unsigned int controlCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isReadyForOperationAfterCheckUpdate;
+ (void)PBArrayAdd_isClearAllPkgExceptCurrentEnabledVersion;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_nonAtomicSingleFileCount;
+ (void)PBArrayAdd_nonAtomicSingleFileListNeedDownload;
+ (void)PBArrayAdd_nonAtomicSingleFileListDownloadSuccessed;
+ (void)PBArrayAdd_file2DownloadFailCount;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_controlCommand;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
