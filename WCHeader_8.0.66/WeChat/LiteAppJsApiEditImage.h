@class NSString, NSMutableArray, WCEditImageViewController;

@interface LiteAppJsApiEditImage : LiteAppJsApi <WCEditImageViewControllerDelegate, IWebviewResourceManagerExt> {
    NSMutableArray *_localIds;
    long long _totalCount;
    WCEditImageViewController *_editImageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)editImageViewController:(id)a0 didFinishEditingImage:(id)a1;
- (void)editImageViewControllerDidCancel:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)delayNotifyWeb:(id)a0;
- (void).cxx_destruct;

@end
