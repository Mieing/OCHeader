@class NSString;

@interface WAReportPatchUpdateItem : WAReportBaseItem

@property (nonatomic) long long oldVersion;
@property (nonatomic) long long targetVersion;
@property (nonatomic) long long beginTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL canUsePatchUpdate;
@property (nonatomic) BOOL isUpdateComplete;
@property (nonatomic) BOOL isUpdateCompleteWithPatch;
@property (nonatomic) unsigned int fullPkgSize;
@property (nonatomic) unsigned int patchSize;
@property (nonatomic) unsigned int patchError;
@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned int gzipReadyTime;
@property (nonatomic) unsigned int zstdReadyTime;
@property (nonatomic) unsigned int pkgType;
@property (nonatomic) unsigned int protocol;
@property (nonatomic) unsigned int downloadSize;
@property (nonatomic) unsigned int dnsType;
@property (nonatomic) unsigned int requestSourceSyncType;
@property (nonatomic) unsigned int requestSourceIsPreHot;
@property (nonatomic) unsigned int requestSourceLaunchFlag;
@property (nonatomic) unsigned int downloadComponentType;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
