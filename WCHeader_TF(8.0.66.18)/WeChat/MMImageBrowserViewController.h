@class CMessageWrap, OCRTransHalfScreenViewController, NSString, WCImageTranslateLogic, QRCodeInMultiDisplayView, MMImageBrowserViewModel, EditImageForwardAndEditLogicController, WCActionSheet, ScanQRCodeLogicController;

@interface MMImageBrowserViewController : MMMediaBrowserViewController <RecentForwardScrollViewDelegate, EditImageForwardAndEditLogicDelegate, BaseScanLogicDelegate, MMActionSheetQRCodeRowViewDelegate, QRCodeInMultiDisplayViewDelegate, WCImageTranslateDelegate, WCTranslateImgViewControllerDelegate, OCRTransHalfScreenViewControllerDelegate, WCActionSheetDelegate> {
    EditImageForwardAndEditLogicController *m_editImageLogicController;
}

@property (retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic;
@property (retain, nonatomic) QRCodeInMultiDisplayView *qrCodeMultiView;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl;
@property (retain, nonatomic) WCActionSheet *saveActionSheet;
@property (nonatomic) unsigned int livePhotoClickCount;
@property (readonly, nonatomic) MMImageBrowserViewModel *viewModel;
@property (retain, nonatomic) CMessageWrap *originMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)registerYReportSdk;
- (BOOL)onSingleTap;
- (void)setupScrollActionSheet;
- (void)addActionSheetItem:(unsigned int)a0 iconImage:(id)a1 title:(id)a2 toArray:(id)a3;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (BOOL)showActionSheetBeforeSaveToAlbum;
- (void)handleSaveImageToAlbum;
- (void)handleEditImage;
- (void)handleSearchImage;
- (void)handleTranslateImage;
- (void)handleImageOCR;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)onScanEnds;
- (void)onTappedRowInfo:(id)a0;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)dismissQRCodeMultiView;
- (void)onCancelBtnClicked:(id)a0;
- (void)onDotViewClicked:(id)a0;
- (void)onSelectMarkDotInfo:(id)a0;
- (id)getTranslateImgIdentifier:(id)a0;
- (void)onShowTranslateImage:(id)a0;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (void)photoVCWillBePoped;
- (void)onImageDetectUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)onImageDetectOCRFinish:(unsigned int)a0 jsonStr:(id)a1 reqKey:(id)a2 ocrResultType:(long long)a3;
- (void)showOCRHalfScreenViewCtrl;
- (void)onClickLivePhotoButton;
- (void).cxx_destruct;

@end
