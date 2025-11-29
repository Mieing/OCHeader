@interface AWETransferToImageAlbumEditVCManager : NSObject

+ (void)continueAddedAssets:(id)a0 selectedAssets:(id)a1 publishModel:(id)a2 successBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
+ (void)transferToImageAlbumEditPageWithAssets:(id)a0 publishModel:(id)a1 transitioningDelegate:(id)a2;
+ (BOOL)enableImageAlbumEditWithAssets:(id)a0 publishModel:(id)a1;
+ (void)transferToImageAlbumEditPageWithAssets:(id)a0 publishModel:(id)a1 topViewController:(id)a2 transitioningDelegate:(id)a3;
+ (void)transferToImageAlbumEditPageWithAssets:(id)a0 publishModel:(id)a1 topViewController:(id)a2 transitioningDelegate:(id)a3 successBlock:(id /* block */)a4 failedBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 useTopVCForPresent:(BOOL)a7;
+ (void)transferToImageAlbumEditPageWithAssets:(id)a0 publishModel:(id)a1 topViewController:(id)a2 transitioningDelegate:(id)a3 customerOutputHandler:(id /* block */)a4 successBlock:(id /* block */)a5 failedBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7 useTopVCForPresent:(BOOL)a8;
+ (BOOL)p_presentBugFix;
+ (void)transferToImageAlbumEditPageWithAssets:(id)a0 publishModel:(id)a1 topViewController:(id)a2 transitioningDelegate:(id)a3 successBlock:(id /* block */)a4 failedBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6;
+ (void)transferToImageAlbumEditPageWithAssets:(id)a0 publishModel:(id)a1 transitioningDelegate:(id)a2 successBlock:(id /* block */)a3 failedBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (void)transferToImageAlbumEditPageWithResourceEncodeJSONString:(id)a0 publishModel:(id)a1 transitioningDelegate:(id)a2 successBlock:(id /* block */)a3 failedBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;

@end
