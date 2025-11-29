@class NSString, NSMutableArray, NSMutableDictionary;

@interface WePkgNonAtomicSingleFileConfig : MMObject

@property (retain, nonatomic) NSString *nsPkgId;
@property (retain, nonatomic) NSString *nsAppId;
@property (nonatomic) unsigned int uiPkgType;
@property (retain, nonatomic) NSString *nsEnteranceDomain;
@property (retain, nonatomic) NSString *nsCurrentEnabledVersion;
@property (nonatomic) unsigned int uiLastUnusedSeconds;
@property (nonatomic) unsigned int uiCheckIntervalSeconds;
@property (nonatomic) BOOL bClearAllPkgExceptCurrentEnabledVersion;
@property (retain, nonatomic) NSString *nsCheckResonseMd5;
@property (retain, nonatomic) NSString *nsCharSet;
@property (nonatomic) unsigned int controlCommand;
@property (nonatomic) BOOL bIsReadyForOperationAfterCheckUpdate;
@property (nonatomic) unsigned int uiNonAtomicSingleFileCount;
@property (retain, nonatomic) NSMutableArray *nonAtomicSingleFileListNeedDownload;
@property (retain, nonatomic) NSMutableArray *nonAtomicSingleFileListDownloadSuccessed;
@property (retain, nonatomic) NSMutableDictionary *file2DownloadFailCount;
@property (nonatomic) unsigned int uiCheckUpdateSuccessTime;

+ (id)nonAtomicSingleFileConfigFromTableItem:(id)a0;

- (id)generateTableItem;
- (id)debugDescription;
- (void).cxx_destruct;

@end
