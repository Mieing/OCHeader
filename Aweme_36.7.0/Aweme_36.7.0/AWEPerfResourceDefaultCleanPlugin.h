@class NSString, AWEPerfResourceCleanConfiguration, NSDate, NSMutableArray;

@interface AWEPerfResourceDefaultCleanPlugin : NSObject <HMDDiskVisitor, AWEPerfResourceCleanStrategy>

@property (copy, nonatomic) NSString *rootPath;
@property (retain, nonatomic) AWEPerfResourceCleanConfiguration *cleanConfig;
@property (nonatomic) unsigned long long bundleSize;
@property (retain, nonatomic) NSMutableArray *cleanItems;
@property (retain, nonatomic) NSDate *currentAccessDate;
@property (retain, nonatomic) NSDate *latestSubAccessDate;
@property (copy, nonatomic) NSString *willRemovePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usedOneTimeCleanIDList;
+ (void)setIsUsedOneTimeCleanID:(long long)a0 async:(BOOL)a1;
+ (id)autoCleanConfigs;
+ (BOOL)checkIsUsedOneTimeCleanID:(long long)a0;

- (void)visitFile:(id)a0 size:(unsigned long long)a1 lastAccessDate:(id)a2 deepLevel:(long long)a3;
- (void)visitDirectory:(id)a0 size:(unsigned long long)a1 fileCount:(unsigned long long)a2 lastAccessDate:(id)a3;
- (void)visitDirectory:(id)a0 size:(unsigned long long)a1 deepLevel:(unsigned long long)a2;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (BOOL)useAllocatedDiskSize;
- (void)executeClean;
- (void)emptyClean;
- (void)expireClean;
- (void)lruClean;
- (void)fifoClean;
- (BOOL)isEmptyPath:(id)a0 isDirectory:(BOOL)a1;
- (void)removeItemAtPath:(id)a0 isDirectory:(BOOL)a1;
- (BOOL)expired:(id)a0;
- (BOOL)isRelativePathMatch:(id)a0;
- (id)initWithRootPath:(id)a0 cleanConfig:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
