@class NSString, NSMutableArray;

@interface WePkgRegularConfig : MMObject

@property (retain, nonatomic) NSString *nsPkgId;
@property (retain, nonatomic) NSString *nsAppId;
@property (nonatomic) unsigned int uiPkgType;
@property (retain, nonatomic) NSString *nsEnteranceDomain;
@property (retain, nonatomic) NSString *nsCurrentEnabledVersion;
@property (nonatomic) unsigned int uiLastUnusedSeconds;
@property (nonatomic) unsigned int uiCheckIntervalSeconds;
@property (nonatomic) unsigned int uiLastUsedTimestamp;
@property (retain, nonatomic) NSString *nsCheckResponseMd5;
@property (retain, nonatomic) NSString *nsCharSet;
@property (nonatomic) unsigned int uiCheckUpdateSuccessTime;
@property (retain, nonatomic) NSString *nsBigPackageMd5;
@property (retain, nonatomic) NSString *nsBigPackageDownloadUrl;
@property (nonatomic) unsigned int uiBigPackageDownloadNetworkType;
@property (nonatomic) unsigned int uiBigPackageSizeInBytes;
@property (retain, nonatomic) NSMutableArray *atomicSingleFileList;
@property (retain, nonatomic) NSMutableArray *nonAtomicSingleFileList;

+ (id)regularConfigFromTableItem:(id)a0;

- (id)generateTableItem;
- (BOOL)hasBigPackage;
- (BOOL)hasValidContent;
- (id)debugDescription;
- (void).cxx_destruct;

@end
