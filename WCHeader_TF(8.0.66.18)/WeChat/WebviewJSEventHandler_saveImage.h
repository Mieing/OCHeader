@class MMUIViewController, NSString, UIImage, WCImageTranslateLogic, NSCache, NSDictionary, WCActionSheetWithScanWXCode, ScanQRCodeLogicController;

@interface WebviewJSEventHandler_saveImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, BaseScanLogicDelegate, WCImageTranslateDelegate> {
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    UIImage *_scanImage;
    MMUIViewController *_webViewController;
    NSCache *_watermarkImageCache;
}

@property (nonatomic) double elementTop;
@property (nonatomic) double elementLeft;
@property (nonatomic) double elementWidth;
@property (nonatomic) double elementHeight;
@property (retain, nonatomic) NSDictionary *eventConfigDict;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (nonatomic) BOOL isScanScreen;
@property (nonatomic) BOOL canShowActionSheetOnlyForQrCode;
@property (copy, nonatomic) NSString *m_imgUrl;
@property (copy, nonatomic) NSString *m_base64Data;
@property (nonatomic) BOOL showActionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)actionSheet:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)reportWebviewImageActionWithActionSheet:(id)a0 itemType:(unsigned int)a1;
- (void)reportImageSearchMenuItemExposed;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)shouldAddScanQRCodeButton;
- (BOOL)shouldAddFavButton;
- (BOOL)shouldAddShareButton;
- (BOOL)shouldAddSaveToAlbumButton;
- (BOOL)shouldAddTranslateImageButton;
- (BOOL)shouldAddImageSearchButton;
- (void)scanImageByWebData;
- (void)prepareForPreTranslateImage;
- (void)preTranslateImageWihtUrl:(id)a0;
- (void)pushTranslatedPhotoViewController;
- (id)setupAndGetPhotoViewController;
- (id)__genImageBySnapLocation;
- (void)scanImageBySnapLocation;
- (void)scanImageBySnapshotScreen;
- (void)PreScanQRCode;
- (void)saveImageToAlbumWithUrl:(id)a0 OrBase64Data:(id)a1 canAddWatermark:(BOOL)a2 Selector:(SEL)a3;
- (id)getWatermarkImage:(id)a0 data:(id)a1 imgUrl:(id)a2;
- (BOOL)shouldShowWatermark:(id)a0;
- (id)getColorL1:(id)a0;
- (id)getMpInfoModel;
- (void)sendMsgWithImageData:(id)a0;
- (void)saveImgWithImageData:(id)a0;
- (void)addImgFavWithImageData:(id)a0;
- (void)startImageSearch:(id)a0;
- (void)startCircleToSearch:(id)a0;
- (id)init;
- (void)dealloc;
- (void)onPushViewContoller:(id)a0 animated:(BOOL)a1;
- (void)onScanEnds;
- (void)onGetA8KeyResultType:(unsigned int)a0;
- (BOOL)isForbidForward;
- (void)onPreDetectWordSuccess:(id)a0;
- (id)getTranslateImgIdentifier:(id)a0;
- (void).cxx_destruct;

@end
