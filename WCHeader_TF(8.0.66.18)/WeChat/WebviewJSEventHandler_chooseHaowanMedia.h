@class UINavigationController, NSString, NSMutableArray;

@interface WebviewJSEventHandler_chooseHaowanMedia : WebviewJSEventHandlerBase <MMImagePickerManagerDelegate, GameVideoAlbumControllerDelegate, IWebviewResourceManagerExt> {
    NSMutableArray *_localIds;
    unsigned long long _totalCount;
}

@property (weak, nonatomic) UINavigationController *startViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showGameVideoAlbum:(long long)a0 params:(id)a1;
- (void)showGameHaowanTabAlbum:(long long)a0 params:(id)a1;
- (void)videoAlbumControllerDidExit;
- (void)videoAlbumControllerDidSkip;
- (void)gameAlbumVideoDidChoose:(id)a0 extraInfo:(id)a1;
- (void)showAssetPicker:(id)a0;
- (void)showImageEditor:(unsigned long long)a0;
- (void)showVideoEditor;
- (void)showImageAndVideoEditor:(unsigned long long)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithAsset:(id)a1;
- (void)MMImagePickerManagerDidSkip:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingVideoWithInfo:(id)a1;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)callbackCanceled;
- (void)callbackWithVideoInfo:(id)a0 extra:(id)a1;
- (void)handlePickingImageWithInfo:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)gameVideoEditController:(id)a0 didFinishWithFilePath:(id)a1 withExtra:(id)a2;
- (void)gameVideoEditController:(id)a0 didFailedWithError:(id)a1;
- (void)trackEventChooseMediaExplosure;
- (void)trackEventChooseMediaCancel;
- (id)reportObjWithPosition:(long long)a0 action:(long long)a1;
- (void).cxx_destruct;

@end
