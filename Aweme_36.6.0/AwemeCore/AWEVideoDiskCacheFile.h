@class NSString, NSMutableDictionary;

@interface AWEVideoDiskCacheFile : NSObject <AWEVideoDiskCacheProtocol>

@property (retain, nonatomic) NSMutableDictionary *metaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableAutoTrimForKey:(id)a0;
+ (void)enableAutoTrimForKey:(id)a0;
+ (void)sizeWithCompletion:(id /* block */)a0;
+ (void)metaDataForKey:(id)a0 completion:(id /* block */)a1;
+ (void)cacheDataForKeySync:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)appendCacheData:(id)a0 offset:(unsigned long long)a1 forKey:(id)a2 mimeType:(id)a3 fileLength:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)hasCacheForKey:(id)a0 completion:(id /* block */)a1;
+ (void)getCacheInfoForKey:(id)a0 completion:(id /* block */)a1;
+ (void)trimDiskCacheToSize:(unsigned long long)a0;
+ (void)metaDataForKeySync:(id)a0 completion:(id /* block */)a1;
+ (void)finishCacheForKey:(id)a0 originURLString:(id)a1 completion:(id /* block */)a2;
+ (void)cacheDataForKey:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)clearForKeys:(id)a0;
+ (id)metaPath;
+ (id)dataPathWithKey:(id)a0;
+ (id)cachePath;
+ (void)clear;
+ (id)tmpPath;
+ (id)sharedInstance;

- (void)_initializeMetaData;
- (void)_clearCacheOnceForAll;
- (void)_appendCacheData:(id)a0 offset:(unsigned long long)a1 forKey:(id)a2 mimeType:(id)a3 fileLength:(unsigned long long)a4 completion:(id /* block */)a5;
- (BOOL)_syncMetaData;
- (void)_finishCacheForKey:(id)a0 originURLString:(id)a1 completion:(id /* block */)a2;
- (void)_cacheDataForKey:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_metaDataForKey:(id)a0 completion:(id /* block */)a1;
- (void)_hasCacheForKey:(id)a0 completion:(id /* block */)a1;
- (void)_getCacheInfoForKey:(id)a0 completion:(id /* block */)a1;
- (void)_sizeWithCompletion:(id /* block */)a0;
- (void)_clearCacheSafely;
- (void)_clearForKeys:(id)a0;
- (void)_clearForKey:(id)a0;
- (void)_trimDiskCacheToSize:(unsigned long long)a0;
- (void)_disableAutoTrim:(BOOL)a0 key:(id)a1;
- (void)_clearFolderAtPath:(id)a0;
- (long long)_folderSizeAtPath:(id)a0;
- (void)_clear;
- (void).cxx_destruct;
- (id)init;
- (long long)_fileSizeAtPath:(id)a0;
- (long long)_cacheSize;

@end
