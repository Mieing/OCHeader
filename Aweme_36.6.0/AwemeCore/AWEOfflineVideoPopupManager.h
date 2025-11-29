@interface AWEOfflineVideoPopupManager : NSObject

+ (void)canDownloadVideoWithAwemeModel:(id)a0 completion:(id /* block */)a1;
+ (void)canDownloadVideoWithAwemeModels:(id)a0 completion:(id /* block */)a1;
+ (void)showCacheSuccessBottomNotification:(id)a0;
+ (void)showCacheSuccessToast:(id)a0;
+ (void)deleteCacheVideosWithTitle:(id)a0 Completion:(id /* block */)a1;
+ (BOOL)shouldShowLimitNetworkTrafficPopupWithAwemeModels:(id)a0;
+ (void)showCacheConfirmDialogWithAwemeModels:(id)a0 completion:(id /* block */)a1;
+ (id)checkBoxSelectCacheKey;
+ (id)cacheStorageTipKey;
+ (void)showBottomNotification;

@end
