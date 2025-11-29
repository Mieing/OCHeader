@class UIScrollView, NSString, UIImage, WCImageTranslateLogic, EnhanceTranslatingImageCdnObject, UIImageView, UIButton, UILabel, OCRTransReport;
@protocol EnhanceTranslatingResultViewControllerDelegate;

@interface EnhanceTranslatingResultViewController : MMUIViewController <IOCRTransMgrExt, UIScrollViewDelegate, MMScrollActionSheetDelegate, WCActionSheetDelegate, WCImageTranslateDelegate> {
    unsigned int _sessionId;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIButton *translateBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) UILabel *translateLabel;
@property (retain, nonatomic) UILabel *saveLabel;
@property (retain, nonatomic) WCImageTranslateLogic *imgTranslateLogic;
@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) UIImage *translatedImage;
@property (nonatomic) double closeBtnCenterY;
@property (nonatomic) int scene;
@property (retain, nonatomic) OCRTransReport *report;
@property (retain, nonatomic) EnhanceTranslatingImageCdnObject *cdnObject;
@property (weak, nonatomic) id<EnhanceTranslatingResultViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doFeedBackWithType:(unsigned long long)a0;
- (void)cdnUploadFeedbackData:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)shouldInteractiveDismiss;
- (void)updateBeforeTransitionAnimation;
- (void)updateAfterTransitionAnimation;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (void)translateButtonClicked:(id)a0;
- (void)saveButtonClicked:(id)a0;
- (void)clsoeButtonClicked:(id)a0;
- (void)showActionSheet;
- (void)moreButtonClicked:(id)a0;
- (void)handleImageLongPressGesture:(id)a0;
- (void)reTranslateImage;
- (void)onCdnUploadImageDataFinish:(unsigned int)a0 isSuccess:(BOOL)a1;
- (void)onSendTransImageData:(unsigned int)a0 ret:(id)a1 pbCGIWrap:(id)a2;
- (void)onGotTranslatingImage:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (id)genMenuItemArray;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)reportTranslateMenuClick:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getTranslateImgIdentifier:(id)a0;
- (void)onShowTranslateImage:(id)a0;
- (void).cxx_destruct;

@end
