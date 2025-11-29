@class NSString, NSMutableArray, MMImageCropperViewController;

@interface LiteAppJsApiCropImage : LiteAppJsApi <MMImageCropperDelegate, IWebviewResourceManagerExt> {
    NSMutableArray *_localIds;
    long long _totalCount;
    MMImageCropperViewController *_cropViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)imageCropper:(id)a0 didFinished:(id)a1;
- (void)imageCropperDidCancel:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)delayNotifyWeb:(id)a0;
- (void).cxx_destruct;

@end
