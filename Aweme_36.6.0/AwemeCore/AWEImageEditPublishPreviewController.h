@class UIView, NSString, ACCImageAlbumEditTagsUploadImageHelper, AWEVideoPublishViewModel, UIImage, UIImageView, UIButton, UIViewController, AWEStickerContainerFakeProfileView;
@protocol UIViewControllerTransitioningDelegate, ACCEditServiceProtocol, AWEImageEditPublishPreviewControllerDelegate;

@interface AWEImageEditPublishPreviewController : UIViewController <AWEZoomTransitionInnerContextProvider, UIGestureRecognizerDelegate, ACCEditImageAlbumMixedMessageProtocolD, AWEStudioTransitionPreviewerToPublisherContextProvider>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) long long anchorIndex;
@property (copy, nonatomic) NSString *originalCoverID;
@property (copy, nonatomic) id /* block */ publishDidClickBlock;
@property (retain, nonatomic) ACCImageAlbumEditTagsUploadImageHelper *uploadImageHelper;
@property (retain, nonatomic) UIImage *previewImage;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIButton *coverActionBtn;
@property (retain, nonatomic) UIImageView *pauseIconView;
@property (nonatomic) BOOL didViewAppearOnce;
@property (nonatomic) BOOL didViewAppear;
@property (nonatomic) BOOL didTrackQuit;
@property (nonatomic) BOOL useNewStyle_22_4_0;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (nonatomic) BOOL firstImgAsCoverExpt;
@property (retain, nonatomic) AWEStickerContainerFakeProfileView *fakeFeedInfoView;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ didDismissNewCoverEditPageBlock;
@property (weak, nonatomic) id<AWEImageEditPublishPreviewControllerDelegate> delegate;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (long long)zoomTransitionItemOffset;
- (id)trackCommonParams;
- (void)setupNewStyleUI;
- (void)addObserve;
- (void)onCurrentImageEditorChanged:(long long)a0 isByAutoTimer:(BOOL)a1;
- (long long)currentImagePlayerIdx;
- (id)coverImageID;
- (void)previewTapAction:(id)a0;
- (void)updatePauseIconWithPaused:(BOOL)a0 animated:(BOOL)a1;
- (void)trackQuitPhotoPreviewPageWithQuitMethod:(id)a0;
- (BOOL)isOnCoverIdx;
- (id)coverActionBtnText;
- (void)refreshCoverActionBtn;
- (void)trackClickOverEntracnceWithButtonType:(id)a0;
- (void)uploadImageToCloudWithIndex:(long long)a0;
- (void)trackSaveCoverEditWithIndex:(long long)a0;
- (void)backBtnAction:(id)a0;
- (void)coverBtnAction:(id)a0;
- (void)publishBtnAction:(id)a0;
- (id)initWithPublishViewModel:(id)a0 editService:(id)a1 previewImage:(id)a2 atIndex:(long long)a3;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
