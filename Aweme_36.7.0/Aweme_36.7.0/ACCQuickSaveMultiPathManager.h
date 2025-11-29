@interface ACCQuickSaveMultiPathManager : NSObject

+ (BOOL)saveAlbumToMultiPathEnable;
+ (unsigned long long)currentSaveAlbumToMultiPathCacheWithDraftBox:(BOOL)a0;
+ (BOOL)currentDisableSaveDraftCache;
+ (unsigned long long)currentSaveAlbumToMultiPathCacheStyle;
+ (BOOL)saveToAlbumAndDraftBoxEnable:(id)a0;
+ (void)updateSaveAlbumToMultiPathCacheWithStyle:(unsigned long long)a0 complete:(id /* block */)a1;
+ (void)updateDisableSavedraftPathCache:(BOOL)a0;
+ (id)toastWithError:(id)a0 resultInfo:(id)a1 partialSuccess:(BOOL *)a2;
+ (id)transformMultiPathStyleToTrackStringWith:(unsigned long long)a0;

@end
