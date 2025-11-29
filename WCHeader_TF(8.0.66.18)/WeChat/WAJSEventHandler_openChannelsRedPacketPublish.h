@class WCFinderCreateCoordinator, NSString, MJPublisher, MMAsset;

@interface WAJSEventHandler_openChannelsRedPacketPublish : WAJSEventHandler_BaseEvent <MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, WCFinderVideoProducerViewControllerDelegate, WCFinderCreateCoordinatorDelegate, WCFinderPostViewControllerDelegate>

@property (retain, nonatomic) MJPublisher *mjPublisher;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (retain, nonatomic) MMAsset *finderAsset;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) BOOL isUsingNewPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)handleJSEventOnAuthorized:(id)a0;
- (void)handleJSEventForNewPublisher:(id)a0;
- (void)onSightCameraCancel:(id)a0;
- (void)shootComposingViewController:(id)a0 didTakenSightPicture:(id)a1 imageData:(id)a2 frontCamera:(BOOL)a3 editImageAttr:(id)a4;
- (void)shootComposingViewController:(id)a0 didTakenShortVideo:(id)a1 thumbImg:(id)a2 editVideoAttr:(id)a3 paramModel:(id)a4;
- (void)shootComposingViewController:(id)a0 didFinishComposingWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)shootComposingViewController:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)shootComposingViewController:(id)a0 didFinishPickingImageWithActionFlow:(id)a1;
- (void)shootComposingViewController:(id)a0 didFinishPickEditingSightWithInfo:(id)a1;
- (void)shootComposingViewController:(id)a0 didFinishPickingAssetWithPostSession:(id)a1;
- (void)shootComposingViewController:(id)a0 didFinishPickAssetInfos:(id)a1 picker:(id)a2;
- (void)composingViewControllerDidCancel:(id)a0;
- (void)composingViewController:(id)a0 didFailWithError:(id)a1;
- (void)composingViewController:(id)a0 didFinishWithVideoFileURL:(id)a1 userInfo:(id)a2;
- (void)composingViewController:(id)a0 didFinishWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)videoProducerViewController:(id)a0 didFinishWithSightDraft:(id)a1 isAsyncComposite:(BOOL)a2;
- (void)videoProducerViewController:(id)a0 didCancelAfterCleanUp:(BOOL)a1;
- (void)_startMaasComposingWithAssetInfos:(id)a0 picker:(id)a1 startHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_onMJPublisherMovieComposingFinishFailed;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void)postViewControllerPostSucForEnterScene:(unsigned long long)a0 params:(id)a1;
- (id)getFromVC;
- (void)handleJSEventForOldPublisher:(id)a0;
- (void)openPostPageWithTitle:(id)a0 jumpInfo:(id)a1;
- (void)presentPostVCWith:(id)a0;
- (void).cxx_destruct;

@end
