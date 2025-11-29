@class ImageBrowseButton, WCImageTranslateLogic, NSString, UIImage, OCRTransHalfScreenViewController, ImageScrollView;

@interface MMImagePreviewFullScreenViewController : MMUIViewController <ImageScrollViewDelegate, WCImageTranslateDelegate, MMScrollActionSheetDelegate, OCRTransHalfScreenViewControllerDelegate>

@property (retain, nonatomic) ImageScrollView *imageScrollView;
@property (retain, nonatomic) ImageBrowseButton *closeBtn;
@property (retain, nonatomic) ImageBrowseButton *downloadBtn;
@property (retain, nonatomic) ImageBrowseButton *moreBtn;
@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) UIImage *translatedImage;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl;
@property (nonatomic) unsigned int mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)hidesStatusBar;
- (void)onCloseBtnClick;
- (void)onDownloadBtnClick;
- (void)onMoreBtnClick;
- (void)handleTranslateImage;
- (void)handleImageOCR;
- (void)setToolViewHidden:(BOOL)a0;
- (void)saveImage;
- (void)ImageScrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)getTranslateImgIdentifier:(id)a0;
- (void)onFinishAnimateTranslateImage:(id)a0;
- (void)onShowTranslateImage:(id)a0;
- (void)onCancelTranslateImage:(id)a0;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickCancelTranslateButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickTransalteFeedbackButton;
- (void)onImageDetectUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)onImageDetectOCRFinish:(unsigned int)a0 jsonStr:(id)a1 reqKey:(id)a2 ocrResultType:(long long)a3;
- (void)showOCRHalfScreenViewCtrl;
- (void)handleOCRCustomDismiss;
- (void).cxx_destruct;

@end
