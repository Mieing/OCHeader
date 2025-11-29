@class WCFinderCreateCoordinator, NSString, MJPublisher, MMAsset;

@interface WAJSEventHandler_openChannelsPostPage : WAJSEventHandler_BaseEvent <WCFinderCreateCoordinatorDelegate, WCFinderPostViewControllerDelegate, MJShootComposingViewControllerDelegate, MJMovieComposingViewControllerDelegate, WCFinderVideoProducerViewControllerDelegate>

@property (retain, nonatomic) MJPublisher *mjPublisher;
@property (nonatomic) BOOL isUsingNewPublisher;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (retain, nonatomic) MMAsset *finderAsset;
@property (nonatomic) unsigned long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)openPostPageWithTitle:(id)a0 jumpInfo:(id)a1;
- (void)presentPostVCWith:(id)a0;
- (void)postViewControllerStartUpload;
- (void)postViewControllerCancelPostWithModel:(id)a0;
- (void)postViewControllerPostSucForEnterScene:(unsigned long long)a0 params:(id)a1;
- (void)handlePreloadAction;
- (void)handleJSEventForMJPublisherOnAuthorized:(id)a0;
- (void)shootComposingViewController:(id)a0 didTakenShortVideo:(id)a1 thumbImg:(id)a2 editVideoAttr:(id)a3 paramModel:(id)a4;
- (void)shootComposingViewController:(id)a0 didFinishComposingWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)shootComposingViewController:(id)a0 didFinishPickingImageWithEditImageAttr:(id)a1;
- (void)shootComposingViewController:(id)a0 didFinishPickAssetInfos:(id)a1 picker:(id)a2;
- (void)_startMaasComposingWithAssetInfos:(id)a0 picker:(id)a1 startHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)composingViewControllerDidCancel:(id)a0;
- (void)composingViewController:(id)a0 didFailWithError:(id)a1;
- (void)composingViewController:(id)a0 didFinishWithVideoFileURL:(id)a1 userInfo:(id)a2;
- (void)composingViewController:(id)a0 didFinishWithActionFlow:(id)a1 userInfo:(id)a2;
- (void)videoProducerViewController:(id)a0 didFinishWithSightDraft:(id)a1 isAsyncComposite:(BOOL)a2;
- (void)videoProducerViewController:(id)a0 didCancelAfterCleanUp:(BOOL)a1;
- (void)_onMJPublisherMovieComposingFinishFailed;
- (id)getFromVC;
- (void).cxx_destruct;

@end
