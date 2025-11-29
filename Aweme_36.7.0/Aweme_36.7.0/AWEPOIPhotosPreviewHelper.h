@interface AWEPOIPhotosPreviewHelper : NSObject

+ (void)showPhotosPreviewerWithParams:(id)a0;
+ (void)showPhotosPreviewerForImages:(id)a0 currentIndex:(long long)a1 titles:(id)a2 allowLoop:(BOOL)a3 enableDownload:(BOOL)a4 enableDragDismiss:(BOOL)a5 fromPresenter:(id)a6 delegate:(id)a7;
+ (void)showPhotosPreviewerForImages:(id)a0 currentIndex:(long long)a1 fromPresenter:(id)a2 delegate:(id)a3;

@end
