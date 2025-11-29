@class NSString, NSMutableArray;

@interface ChatLogRawMediaCache : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (nonatomic) long long cacheVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_taskArray;
+ (void)PBArrayAdd_cacheVersion;
+ (void)initialize;
+ (id)getStatFilePath;
+ (unsigned int)currentCacheVersion;
+ (id)loadStat;
+ (void)saveStat:(id)a0;

- (id)getPBPropertyTable;
- (void)removeStat;
- (id)init;
- (void)addRawTaskArray:(id)a0;
- (void)addRawTask:(id)a0;
- (void).cxx_destruct;

@end
