@class UINavigationController, AWEModalTransitionDelegate;

@interface AWEEcAlbumScanMethodImpl : AWEEcAlbumScanMethod

@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL isDetectingQRCode;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (copy, nonatomic) id /* block */ complete;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_presentUploadVideoViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)selectedPhotoForScanWithImage:(id)a0;
- (void).cxx_destruct;

@end
