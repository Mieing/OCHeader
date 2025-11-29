@interface MMAlbumDataProvider : MMObject

+ (void)AllMMAlbumsWith:(id /* block */)a0 errorBlock:(id /* block */)a1 options:(id)a2;
+ (void)AllMMAlbumsWith:(id /* block */)a0 errorBlock:(id /* block */)a1 options:(id)a2 callbackOnMainThread:(BOOL)a3;
+ (BOOL)isAuthorize;
+ (BOOL)isAuthorizeNotDetermined;
+ (BOOL)isUserAuthorize;
+ (BOOL)isPhotoAccessLimited;
+ (void)FirstMMAlbumWith:(id /* block */)a0 errorBlock:(id /* block */)a1 options:(id)a2;
+ (void)ScreenshotMMAlbumWith:(id /* block */)a0;
+ (void)FetchMMAlbumWithID:(id)a0 With:(id /* block */)a1 errorBlock:(id /* block */)a2 options:(id)a3;
+ (void)FetchLastMMAssetWith:(id /* block */)a0 inSecond:(double)a1;
+ (void)FetchLastScreenshotMMAssetWith:(id /* block */)a0 inSecond:(double)a1;
+ (void)internalFetchMMAssetWithMMAlbum:(id)a0 inSecond:(double)a1 resultBlock:(id /* block */)a2;

@end
