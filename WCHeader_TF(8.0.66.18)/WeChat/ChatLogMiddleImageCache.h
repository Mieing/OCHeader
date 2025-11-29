@class NSString, NSMutableArray;

@interface ChatLogMiddleImageCache : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *needConvertImageInfo;
@property (nonatomic) long long cacheVersion;
@property (nonatomic) BOOL bBuildCacheOK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_needConvertImageInfo;
+ (void)PBArrayAdd_cacheVersion;
+ (void)PBArrayAdd_bBuildCacheOK;
+ (void)initialize;
+ (id)getStatFilePath;
+ (unsigned int)currentCacheVersion;
+ (id)loadStat;
+ (void)saveStat:(id)a0;
+ (id)getRelatedMemoryKV;
+ (void)resetTheAnalyse;
+ (id)getReportLog;
+ (void)analyseOneCompress:(BOOL)a0 costTime:(double)a1 beforeSize:(unsigned long long)a2 afterSize:(unsigned long long)a3;
+ (void)reportConvertResult;

- (id)getPBPropertyTable;
- (void)removeStat;
- (id)init;
- (void)setNeedConvertTask:(id)a0;
- (void).cxx_destruct;

@end
