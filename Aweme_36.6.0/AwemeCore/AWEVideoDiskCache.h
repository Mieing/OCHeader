@class NSTimer, NSString;

@interface AWEVideoDiskCache : NSObject <AWEVideoDiskCacheProtocol>

@property (retain, nonatomic) Class cacheClass;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableAutoTrimForKey:(id)a0;
+ (void)enableAutoTrimForKey:(id)a0;
+ (void)hasCacheForURLString:(id)a0 completion:(id /* block */)a1;
+ (void)sizeWithCompletion:(id /* block */)a0;
+ (BOOL)hasEnoughCacheForURLString:(id)a0 videoDuration:(double)a1 networkSpeed:(double)a2;
+ (void)getCacheInfoForURLString:(id)a0 completion:(id /* block */)a1;
+ (void)enableAutoTrimForURLString:(id)a0;
+ (void)disableAutoTrimForURLString:(id)a0;
+ (void)metaDataForKey:(id)a0 completion:(id /* block */)a1;
+ (void)cacheDataForKeySync:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)appendCacheData:(id)a0 offset:(unsigned long long)a1 forKey:(id)a2 mimeType:(id)a3 fileLength:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)trimDiskCacheToQuota;
+ (void)hasCacheForKey:(id)a0 completion:(id /* block */)a1;
+ (void)getCacheInfoForKey:(id)a0 completion:(id /* block */)a1;
+ (void)trimDiskCacheToSize:(unsigned long long)a0;
+ (unsigned long long)freeFileSystemSize;
+ (void)metaDataForKeySync:(id)a0 completion:(id /* block */)a1;
+ (void)finishCacheForKey:(id)a0 originURLString:(id)a1 completion:(id /* block */)a2;
+ (void)cacheDataForKey:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)clearForKeys:(id)a0;
+ (long long)sizeAtFilePath:(id)a0;
+ (void)clearForURLString:(id)a0;
+ (BOOL)hasEnoughFreeDiskSize;
+ (id)cachePath;
+ (void)clear;
+ (id)cacheQueue;
+ (id)sharedInstance;

- (void)setupTrimTimer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_addNotificationObservers;

@end
