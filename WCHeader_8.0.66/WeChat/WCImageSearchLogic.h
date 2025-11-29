@class MMImageDetectUploader, WCImageSearchEntity, NSString, MsgDataDownloadLogic, WCWebSearchViewControllerNewH5;
@protocol WCImageSearchEventDelegate;

@interface WCImageSearchLogic : MMObject <MsgDataDownloadDelegate, IScanGoodsServiceExt, MMImageDetectUploaderDelegate>

@property (nonatomic) int detectImageEventID;
@property (retain, nonatomic) MsgDataDownloadLogic *imageDownloadLogic;
@property (retain, nonatomic) WCWebSearchViewControllerNewH5 *webSearchVC;
@property (retain, nonatomic) WCImageSearchEntity *searchEntity;
@property (retain, nonatomic) MMImageDetectUploader *uploader;
@property (weak, nonatomic) id<WCImageSearchEventDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSearchEntity:(id)a0;
- (void)dealloc;
- (void)startRecognize;
- (void)reportJumpLoadingView;
- (void)tryStartDownloadImageIfNeed;
- (void)onImageDetectUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)onSendPressImageInfoSuccess:(id)a0;
- (void)onSendPressImageInfoFail:(id)a0 errorCode:(long long)a1 errorMsg:(id)a2 isNetworkError:(BOOL)a3;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (id)curViewController;
- (void).cxx_destruct;

@end
