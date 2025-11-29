@class NSString, NSArray, BDPTrackEventInfo, BDPUniqueID, NSDate;
@protocol BDPODRMetaBriefProtocol;

@interface BDPODRXFileBasicModel : NSObject <BDPODRXResolveInformation, BDPAppMetaBriefProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *startPagePath;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *serviceProviderID;
@property (copy, nonatomic) NSString *versionMark;
@property (copy, nonatomic) NSArray *packages;
@property (nonatomic) long long versionCode;
@property (nonatomic) BOOL isDebugMode;
@property (nonatomic) long long appType;
@property (copy, nonatomic) NSArray *urls;
@property (retain, nonatomic) id<BDPODRMetaBriefProtocol> gameExtension;
@property (copy) NSArray *lynxPageList;
@property (nonatomic) long long readType;
@property (nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *versionType;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) BDPTrackEventInfo *trackInfo;
@property (readonly, nonatomic) float downloadPriority;
@property (retain, nonatomic) NSDate *loadDate;
@property (nonatomic) BOOL didCreateAppFolder;
@property (copy, nonatomic) NSString *pkgSandbox;
@property (nonatomic) BOOL usedCacheMeta;
@property (nonatomic) long long dbReadType;
@property (copy, nonatomic) NSArray *firstReadTypes;
@property (copy, nonatomic) NSArray *firstLoadStatus;
@property (nonatomic) BOOL isReusePreload;
@property (nonatomic) BOOL isDownloadRange;
@property (nonatomic) BOOL isFirstOpen;
@property (nonatomic) BOOL subpkgDownloadAll;
@property (nonatomic) BOOL isInMemoryWhenLoad;
@property (retain, nonatomic) NSDate *headerParseEndDate;
@property (nonatomic) BOOL useBackupPkg;
@property (nonatomic) BOOL needUpdatePkgInfos;
@property (copy, nonatomic) NSString *odrTag;
@property (readonly, nonatomic) NSString *requestIdPrefix;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ md5InvliadBlk;
@property (copy, nonatomic) NSString *buildTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicModelWithMeta:(id)a0 readType:(long long)a1 urls:(id)a2;
+ (id)basicModelWithMeta:(id)a0 readType:(long long)a1;
+ (id)identifierWithMeta:(id)a0;
+ (id)pkgSandboxPathWithMeta:(id)a0;
+ (id)basicModelWithPkgContext:(id)a0;
+ (id)basicModelWithMeta:(id)a0 readType:(long long)a1 startPagePath:(id)a2;

- (void)updateModelWithPkgContext:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)uniqueID;
- (BOOL)isEqual:(id)a0;

@end
