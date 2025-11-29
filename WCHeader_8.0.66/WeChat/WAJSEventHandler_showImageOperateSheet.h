@class NSString, WCActionSheetWithScanWXCode, ScanQRCodeLogicController;

@interface WAJSEventHandler_showImageOperateSheet : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, BaseScanLogicDelegate> {
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    BOOL _hasScanScreen;
}

@property (nonatomic) double elementTop;
@property (nonatomic) double elementLeft;
@property (nonatomic) double elementWidth;
@property (nonatomic) double elementHeight;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (retain, nonatomic) NSString *base64DataString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)tryScanImage;
- (id)getImageData;
- (id)tryGetImageFromBase64Data;
- (id)tryGetLocalImage:(id)a0;
- (void)PreScanQRCode:(id)a0;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)asyncGetImageData:(id)a0 AndPerformSelector:(SEL)a1;
- (void)sendMsgWithImageData:(id)a0;
- (void)saveImgWithImageData:(id)a0;
- (void)addImgFavWithImageData:(id)a0;
- (void).cxx_destruct;

@end
