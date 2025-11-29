@class NSString, NSMutableArray;

@interface WePkgRegularConfigExt : MMObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *currentEnabledVersion;
@property (retain, nonatomic) NSString *currentPkgMd5;
@property (nonatomic) unsigned int lastUnusedSeconds;
@property (nonatomic) unsigned int checkIntervalSeconds;
@property (nonatomic) unsigned int lastUsedTimestamp;
@property (retain, nonatomic) NSString *checkResponseMd5;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int downloadNetworkType;
@property (nonatomic) unsigned int pkgSizeInBytes;
@property (retain, nonatomic) NSString *charSet;
@property (retain, nonatomic) NSMutableArray *atomicSingleFileList;
@property (retain, nonatomic) NSMutableArray *nonAtomicSingleFileList;
@property (nonatomic) unsigned int checkUpdateSuccessTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_currentEnabledVersion;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_lastUsedTimestamp;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_atomicSingleFileList;
+ (void)PBArrayAdd_nonAtomicSingleFileList;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
