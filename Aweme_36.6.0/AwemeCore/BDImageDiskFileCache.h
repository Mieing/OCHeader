@class NSString, NSFileManager, BDImageCacheConfig, BDDiskIOControl, NSObject;
@protocol OS_dispatch_queue;

@interface BDImageDiskFileCache : NSObject <BDDiskCache>

@property (retain, nonatomic) BDImageCacheConfig *config;
@property (copy, nonatomic) NSString *diskCachePath;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) unsigned long long dateType;
@property (nonatomic) unsigned long long diskSizeLimit;
@property (nonatomic) unsigned long long diskAgeLimit;
@property (nonatomic) double diskTrimmingRate;
@property (retain, nonatomic) BDDiskIOControl *diskControl;
@property (nonatomic) double lastAccessTimeInterval;
@property (nonatomic) double farthestAccessTimeInterval;
@property (copy, nonatomic) id /* block */ clearInternalCallback;
@property (copy, nonatomic) id /* block */ trimBlock;
@property (readonly, nonatomic) BOOL trimDiskInBG;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllData;
- (void)setData:(id)a0 forKey:(id)a1 withBlock:(id /* block */)a2;
- (id)cachePathForKey:(id)a0;
- (void)removeDataForKey:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)containsDataForKey:(id)a0;
- (void)removeAllDataWithBlock:(id /* block */)a0;
- (id)creat_disk_io_queue;
- (BOOL)bd_containsDataForKey:(id)a0;
- (void)updateDiskAccessDateForFilePath:(id)a0;
- (id)bd_dataForKey:(id)a0;
- (void)bd_setData:(id)a0 forKey:(id)a1;
- (void)bd_removeDataForKey:(id)a0;
- (void)bd_removeAllData;
- (void)bd_removeExpiredData;
- (id)clearInfoWithClearStatus:(unsigned long long)a0 currentCacheSize:(unsigned long long)a1;
- (id)cachePathForKey:(id)a0 inPath:(id)a1;
- (id)creat_normal_disk_io_queue;
- (void)containsDataForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)dataForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)dataForKey:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)totalCount;
- (id)initWithCachePath:(id)a0;
- (void)removeDataForKey:(id)a0;
- (unsigned long long)totalSize;
- (void)removeExpiredData;

@end
