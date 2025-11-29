@class NSString, MMImagePickerCacheObj, NSRecursiveLock;

@interface MMImagePickerCacheMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MMImagePickerCacheObj *cacheObj;
@property (nonatomic) long long currentOption;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long maxAssetCacheCount;
@property (nonatomic) BOOL isEnableCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceMemoryWarning;
- (void)didEnterImagePickerWithOption:(long long)a0;
- (void)didLeaveImagePicker;
- (void)setupMaxCacheAssetCount:(long long)a0;
- (id)fetchAlbums;
- (void)updateLastEntryAlbum:(id)a0;
- (id)fetchLastEntryAlbum;
- (void)updateAlbums:(id)a0;
- (void)updateThumbImage:(id)a0 forAlbum:(id)a1;
- (void)updateThumbPhotoCount:(unsigned long long)a0 forAlbum:(id)a1;
- (void)updateTitle:(id)a0 forAlbum:(id)a1;
- (id)fetchAssetWithId:(id)a0;
- (void)updateAsset:(id)a0 inAlbum:(id)a1 index:(unsigned long long)a2;
- (void)updateThumbImage:(id)a0 forAsset:(id)a1;
- (void)updateIsVideo:(BOOL)a0 isGif:(BOOL)a1 videoDuration:(double)a2 forAsset:(id)a3;
- (void)saveToLocal;
- (void)tryLoadFromLocal;
- (id)findAlbumForIdentifier:(id)a0;
- (id)albumsForCurrOption;
- (void)updateAlbumsForCurrOption:(id)a0;
- (void)saveAssetForId:(id)a0;
- (void)dispatchIOAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
