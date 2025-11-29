@class NSString, NSMutableArray, NSMutableDictionary;

@interface WebviewJSEventHandler_chooseImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt> {
    unsigned int m_imgCnt;
    long long m_sizeType;
    long long m_sourceType;
    BOOL m_livePhotoMode;
    BOOL m_canSendGif;
    NSMutableArray *_localIds;
    long long _totalCount;
    NSMutableDictionary *m_livePhotoLocalIds;
    long long m_livePhotoCount;
    unsigned long long m_liveProcessStartTime;
    BOOL m_livePhotoProcessAllDone;
    BOOL _userDidSelectOrCancel;
}

@property (nonatomic) BOOL isAutoConfirm;
@property (nonatomic) double delayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)asyncHandleCancel;
- (void)showImagePicker:(long long)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (long long)getImagePickerSizeType:(id)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (void)onLocalImageSaveFinish:(id)a0;
- (void)delayNotifyWeb:(id)a0;
- (void)tryResponse;
- (void)processLivePhotos:(id)a0;
- (void)processLivePhotosDidFinish:(id)a0 index:(int)a1;
- (void).cxx_destruct;

@end
