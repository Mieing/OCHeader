@class NSString, OCRTransHalfScreenViewController, WCFinderAnimationLoadingView, WXFullScreenGestureRecognizer, UIImageView, WCFinderFullScreenImageBrowseTransition, MMScrollActionSheet, WCImageTranslateLogic, WCFinderFullScreenImgBrowserVCInitParams, UIImage, UIScrollView;

@interface WCFinderFullScreenImageBrowseViewController : MMUIViewController <UIScrollViewDelegate, FullScreenGestureDelegate>

@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) WCFinderFullScreenImageBrowseTransition *transition;
@property (retain, nonatomic) WCFinderFullScreenImgBrowserVCInitParams *params;
@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (retain, nonatomic) OCRTransHalfScreenViewController *ocrHalfScreenViewCtrl;
@property (retain, nonatomic) UIImage *originImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genActionSheetItemWithType:(unsigned long long)a0 iconImage:(id)a1 title:(id)a2;
+ (void)showInViewController:(id)a0 image:(id)a1 optionalParams:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)showInViewController:(id)a0 imageURL:(id)a1 optionalParams:(id)a2 dismissBlock:(id /* block */)a3;
+ (void)showInViewController:(id)a0 image:(id)a1 imageURL:(id)a2 optionalParams:(id)a3 dismissBlock:(id /* block */)a4;

- (void)showActionSheet;
- (void)reportActionSheetItemWithItemID:(id)a0 eventId:(id)a1;
- (id)genScrollActionSheetArray;
- (void)handleShareImage:(id)a0 toContact:(id)a1;
- (void)handleSaveImageToAlbumWithImage:(id)a0;
- (void)handleFavImage:(id)a0;
- (void)asyncGetImageSavePath:(id)a0 completion:(id /* block */)a1;
- (void)handleSearchImage:(id)a0;
- (void)handleTranslateImage:(id)a0;
- (void)handleOCRImage:(id)a0;
- (void)showOCRHalfScreenViewCtrl;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (id)getTranslateImgIdentifier:(id)a0;
- (void)onShowTranslateImage:(id)a0;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (void)onImageDetectUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)onImageDetectOCRFinish:(unsigned int)a0 jsonStr:(id)a1 reqKey:(id)a2 ocrResultType:(long long)a3;
- (id)initWithStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidLoad;
- (void)setupDataReportIfNeeded;
- (void)setUpUI;
- (void)_setImageViewImage:(id)a0;
- (void)handleLongPress:(id)a0;
- (void)handleDoubleTap:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void).cxx_destruct;

@end
