@class PHCachingImageManager, AWEIMAlbumAssetCache, NSMutableDictionary, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMPhotoLibraryManager : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) PHCachingImageManager *cachingManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) AWEIMAlbumAssetCache *cache;
@property (nonatomic) BOOL fetchOptimize;
@property (retain, nonatomic) NSMutableDictionary *livePhotoRequestIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestVideoResourceForLivePhoto:(id)a0 targetPath:(id)a1 complete:(id /* block */)a2;
+ (BOOL)isLivePhoto:(id)a0;
+ (void)requestPhotoLibraryPermissionWithScene:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)requestPhotoLibraryPermissionWithBPEAKey:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isSlomoVideo:(id)a0;
+ (id)getPhotoRequestBPEAKey;
+ (void)fetchSlowMotionResouceUsingNetworkByAsset:(id)a0 sizeGenerator:(id /* block */)a1 BPEAKey:(id)a2 complete:(id /* block */)a3;
+ (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 BPEAKey:(id)a2 contentMode:(long long)a3 options:(id)a4 resultHandler:(id /* block */)a5;
+ (BOOL)hasPhotoLibraryPermission;
+ (void)requestAuthorizationWithScene:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)requestAuthorizationWithToken:(id)a0 completion:(id /* block */)a1;
+ (void)requestAuthorizationWithBPEAKey:(id)a0 completion:(id /* block */)a1;
+ (id)tokenCertWithBPEAKey:(id)a0;
+ (id)sharedInstance;
+ (long long)authorizationStatus;

- (void)removeAllChangeObserver;
- (BOOL)p_isCameraRollAlbum:(id)a0;
- (BOOL)p_isRecentlyDeleteAlbum:(id)a0;
- (BOOL)p_isHiddenAlbum:(id)a0;
- (id)syncGetCameraRollAssetsWithType:(unsigned long long)a0 sortStyle:(long long)a1 BPEAKey:(id)a2 ascending:(BOOL)a3;
- (id)syncGetAssetsFromCollection:(id)a0 withType:(unsigned long long)a1 sortStyle:(long long)a2 BPEAKey:(id)a3 ascending:(BOOL)a4;
- (id)syncFetchCachedAssetsWithCacheKey:(id)a0;
- (void)getCameraRollAssetsWithType:(unsigned long long)a0 sortStyle:(long long)a1 BPEAKey:(id)a2 ascending:(BOOL)a3 useCache:(BOOL)a4 completion:(id /* block */)a5;
- (id)loadCameraRollAssetCollectionWithBPEAKey:(id)a0;
- (id)p_fetchPHAssetsResultWithType:(unsigned long long)a0 sortStyle:(long long)a1 collection:(id)a2 BPEAKey:(id)a3 ascending:(BOOL)a4 limitCount:(long long)a5;
- (id)getCameraRollAssetsFromLibraryWithType:(unsigned long long)a0 sortStyle:(long long)a1 BPEAKey:(id)a2 ascending:(BOOL)a3 limitCount:(long long)a4;
- (void)p_notifyObserversWithChange:(id)a0;
- (id)cachedCameraRollAssetsWithType:(unsigned long long)a0 sortStyle:(long long)a1 ascending:(BOOL)a2;
- (void)getCameraRollAssetsWithType:(unsigned long long)a0 sortStyle:(long long)a1 BPEAKey:(id)a2 ascending:(BOOL)a3 completion:(id /* block */)a4;
- (void)asyncGetCameraRollAssetsFromLibraryWithType:(unsigned long long)a0 sortStyle:(long long)a1 BPEAKey:(id)a2 ascending:(BOOL)a3 limitCount:(long long)a4 completion:(id /* block */)a5;
- (void)asyncLoadAllOrganizedAlbumsWithSortType:(long long)a0 filterTypes:(id)a1 BPEAKey:(id)a2 assetAscending:(BOOL)a3 complete:(id /* block */)a4;
- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;

@end
