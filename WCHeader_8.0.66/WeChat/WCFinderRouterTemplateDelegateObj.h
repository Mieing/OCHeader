@class NSString, WCFinderTemplateBindData, MJPublisher, UIViewController;

@interface WCFinderRouterTemplateDelegateObj : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderVideoProducerViewControllerDelegate, MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, MJPublisherDataSource>

@property (weak, nonatomic) UIViewController *hostVC;
@property (retain, nonatomic) WCFinderTemplateBindData *bindData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MJPublisher *mjPublisher;

+ (id)delegateObjWithHost:(id)a0 bindData:(id)a1;
+ (BOOL)checkIsChildViewController:(id)a0;

- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingSightWithInfo:(id)a1;
- (void)finderTemplateSelectVCDidPickSightDraft:(id)a0;
- (void)processWithSightDraft:(id)a0;
- (void)processWithSightDraft:(id)a0 publisherPostInfo:(id)a1;
- (id)assetPickerController:(id)a0 willSelectAsset:(id)a1 withCurrentState:(id)a2;
- (id)assetPickerController:(id)a0 willFinishPickingAssets:(id)a1 withCurrentState:(id)a2;
- (BOOL)shouldHandlePickingActionOutsideWithAssetInfos:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingWithAssetInfos:(id)a1 isUsingTemplate:(BOOL)a2;
- (void)customBottomComposingButtonEnabledStateDidChange:(BOOL)a0;
- (id)customBottomComposingButtonForAssetPreviewing:(BOOL)a0;
- (void)onSightCameraCancel:(id)a0;
- (void)onShortVideoTaken:(id)a0 thumbImg:(id)a1 editVideoAttr:(id)a2 paramModel:(id)a3;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)postViewControllerFromVC:(id)a0 postSession:(id)a1;
- (id /* block */)processPostSessionModel;
- (void)releaseSelf;
- (void)_releaseSelf;
- (void)startMaasComposingWithAssetInfos:(id)a0 picker:(id)a1 startHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_startMaasComposingWithAssetInfosInner:(id)a0 picker:(id)a1 startHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)videoProducerViewController:(id)a0 didFinishWithSightDraft:(id)a1 isAsyncComposite:(BOOL)a2;
- (void)videoProducerViewController:(id)a0 didCancelAfterCleanUp:(BOOL)a1;
- (void)composingViewControllerDidCancel:(id)a0;
- (void)composingViewController:(id)a0 didFailWithError:(id)a1;
- (void)composingViewController:(id)a0 didFinishWithVideoFileURL:(id)a1 userInfo:(id)a2;
- (void)handleVideoFileURL:(id)a0 composingVC:(id)a1 userInfo:(id)a2;
- (void)composingViewController:(id)a0 didFinishWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)handleActionFlow:(id)a0 composingVC:(id)a1 userInfo:(id)a2;
- (void)shootComposingViewController:(id)a0 didTakenSightPicture:(id)a1 imageData:(id)a2 frontCamera:(BOOL)a3 editImageAttr:(id)a4;
- (void)shootComposingViewController:(id)a0 didTakenShortVideo:(id)a1 thumbImg:(id)a2 editVideoAttr:(id)a3 paramModel:(id)a4;
- (void)shootComposingViewController:(id)a0 didSavedAIGCAsyncDraft:(id)a1;
- (void).cxx_destruct;

@end
