@class MMUIButton, NSString, MMMusicMVModel, UIImage, MMWebImageView, MMMusicBlurCardView, MMUILabel;

@interface MMMusicPublishViewController : MMUIViewController <MMSightCameraViewControllerDelegate, MMImagePickerManagerDelegate, ICdnComMgrExt, MMImageLoaderObserver> {
    MMWebImageView *m_headImageView;
    MMUILabel *m_nickLabel;
    MMMusicBlurCardView *_blurCardView;
    MMUIButton *_editCoverBtn;
    MMMusicMVModel *_mvModel;
}

@property (retain, nonatomic) UIImage *customCoverImage;
@property (nonatomic) unsigned long long fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMvModel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)reload:(id)a0;
- (void)reloadCardDisplay;
- (void)onTapEditCoverBtn;
- (void)editCoverOpenCamera;
- (void)editCoverOpenAlbum;
- (void)OnReturn;
- (void)handleKeepDraftOrCancelFinish;
- (void)OnDone;
- (void)showImage:(id)a0;
- (void)onCardClicked;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
