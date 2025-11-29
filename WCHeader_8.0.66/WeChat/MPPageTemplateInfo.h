@class NSString, NSMutableArray;

@interface MPPageTemplateInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int latestVersion;
@property (nonatomic) unsigned int minValidVersion;
@property (nonatomic) unsigned int latestDownloadedVersion;
@property (retain, nonatomic) NSMutableArray *downloadedRecordList;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int reportId;
@property (retain, nonatomic) NSString *latestFullVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_latestVersion;
+ (void)PBArrayAdd_minValidVersion;
+ (void)PBArrayAdd_latestDownloadedVersion;
+ (void)PBArrayAdd_downloadedRecordList;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_latestFullVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)latestDownloadedFullVersion;
- (id)latestDownloadedVersionGroup;
- (id)downloadedRecordWithVersion:(unsigned int)a0;
- (void)removeDownloadedRecordWithVersion:(unsigned int)a0;
- (void)removeDownloadedRecordWhichIsNotVersion:(unsigned int)a0 getHasDelete:(BOOL *)a1;
- (void)removeDownloadedRecordWithFullVersion:(id)a0 getHasDelete:(BOOL *)a1;
- (void)removeDownloadedRecordWhichIsDeprecatedAndGetHasDelete:(BOOL *)a0;
- (void).cxx_destruct;

@end
