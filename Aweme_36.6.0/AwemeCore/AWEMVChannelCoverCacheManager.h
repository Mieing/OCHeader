@class NSLock, NSMutableDictionary, NSMutableSet, AWEMVChannelCacheUpdateDraft, AWEStorageFilePermanent, BDImageCache;

@interface AWEMVChannelCoverCacheManager : NSObject

@property (retain, nonatomic) AWEStorageFilePermanent *filePermanent;
@property (weak, nonatomic) BDImageCache *imageCache;
@property (retain, nonatomic) AWEMVChannelCacheUpdateDraft *cacheDraft;
@property (retain, nonatomic) NSMutableSet *currentLoadedCacheKeys;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) unsigned long long saveIndex;
@property (retain, nonatomic) NSMutableDictionary *unsavedBitmapCache;
@property (retain, nonatomic) NSMutableDictionary *unsavedBitmapCacheItemID;

+ (id)coverUrlWithAwemeModel:(id)a0;
+ (id)imageIsolateCacheKey:(id)a0;
+ (id)shareInstance;
+ (id)imageCacheKey;

- (void)loadImageBitmapCache:(id)a0;
- (void)saveImageBitmapCache:(id)a0;
- (BOOL)urlHasLoadedBitmapCache:(id)a0;
- (id)createBitmapDataWithCGImage:(struct CGImage { } *)a0;
- (void)writeUnsavedBitmapCache:(id)a0 saveIndex:(unsigned long long)a1;
- (void)readImageBitmapCacheWithKey:(id)a0;
- (id)imageFromBitmapData:(id)a0;
- (BOOL)awemeInMemoryCache:(id)a0;
- (BOOL)urlStringHasLoadedBitmapCache:(id)a0;
- (void)saveImageBitmapCacheWithLoadedCoverImage:(id)a0 url:(id)a1 itemID:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
