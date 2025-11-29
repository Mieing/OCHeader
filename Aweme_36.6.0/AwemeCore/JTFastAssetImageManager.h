@class NSMutableDictionary, MMKV, NSMutableOrderedSet, NSMutableSet, NSObject, NSCache;
@protocol OS_dispatch_queue, FastAssetImageDelegate;

@interface JTFastAssetImageManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSCache *memCache;
@property BOOL isRunning;
@property BOOL hasLoadFile;
@property (nonatomic) BOOL lruEnabled;
@property (nonatomic) BOOL hasAddNoti;
@property (nonatomic) int imageTableFD;
@property (nonatomic) unsigned long long tableFileSizeThreshold;
@property unsigned long long tableFileSize;
@property unsigned long long tableDataOffet;
@property (retain, nonatomic) NSMutableDictionary *imageMetaDataMap;
@property (retain, nonatomic) NSMutableDictionary *removedImageSourceMap;
@property (retain, nonatomic) NSMutableDictionary *uuidMappedData;
@property (retain, nonatomic) NSMutableOrderedSet *lruUUIDSet;
@property (retain, nonatomic) NSMutableSet *inUseSet;
@property (nonatomic) BOOL storeSpaceOptEnabled;
@property (nonatomic) BOOL metaUseMMKVEnabled;
@property (nonatomic) BOOL imageDecodeDisabled;
@property (nonatomic) BOOL hasOutOfTableFileThreshold;
@property (retain, nonatomic) MMKV *metaDataMMKV;
@property (retain, nonatomic) MMKV *lruDataMMKV;
@property (weak, nonatomic) id<FastAssetImageDelegate> delegate;

+ (id)shared;

- (void)setupForNextLaunch;
- (id)getImageWithImageName:(id)a0 bundle:(id)a1;
- (void)cacheBundleImageWithImageName:(id)a0 bundle:(id)a1 image:(id)a2;
- (void)receiveMemoryWarning:(id)a0;
- (void)p_loadSavedImageDataWithoutStartCheck;
- (id)p_imageItemFromLocalWithImageUUID:(id)a0;
- (BOOL)p_cacheImageWithImage:(id)a0 imageDescription:(id)a1 imageUUID:(id)a2;
- (void)p_updateLastUsedImageUUID:(id)a0;
- (id)p_createImageItemWithImage:(id)a0 imageUUID:(id)a1 description:(id)a2;
- (void)p_saveMetaDataAsMMKVByAppend:(id)a0 uuid:(id)a1;
- (void)p_saveMetadata;
- (void)p_logError:(unsigned long long)a0 description:(id)a1;
- (id)p_imageItemForImageUUID:(id)a0;
- (BOOL)p_canAccessCachedData;
- (void)p_loadSavedImageDataIfNeed;
- (id)p_imageItemAtOffset:(long long)a0 length:(long long)a1 effectiveDataLength:(long long)a2 imageDataLength:(unsigned long long)a3 imageUUID:(id)a4 imageByteOffset:(int)a5;
- (void)p_deleteLastUsedUUID;
- (id)p_getCanReusedTableItemWithSize:(unsigned long long)a0;
- (void)p_loadSavedImageDataIfNeedIMP;
- (BOOL)p_appIsUpdate;
- (BOOL)p_loadImageMetaData;
- (BOOL)p_loadImageTable;
- (id)metaFileVersion;
- (BOOL)p_loadImageMetaDataForMMKV;
- (id)p_lastUsedImageUUID;
- (void)p_deleteCacheImageUUID:(id)a0;
- (BOOL)fastAssetImageEnabled;
- (void)configMaxCachedFileSize:(unsigned long long)a0;
- (void)enableStoreSpaceOpt;
- (void)enableMetaDataStoreUseMMKV;
- (void)disableImagePreDecode;
- (void)prepareCachedData;
- (void)removeLocalCacheFile;
- (void)enableRemoveInactivityImage;
- (id)imageWithImageUUID:(id)a0;
- (void)cacheImage:(id)a0 forUUID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
