@class AWEVideoCoverFakeProfileView, AWECoverChooseBottomViewModel, AWECoverTextModel, AWEVideoPublishViewModel, NSString, UIImageView, UIButton, NSDictionary, AWECoverChooseBottomView, AWECoverPreviewController, NSNumber, UIViewController;
@protocol ACCEditServiceProtocol;

@interface AWEVideoCoverChooseViewController : UIViewController <AWECoverChooseBottomViewDelegate, AWECoverPreviewDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) double finalChoosePercent;
@property (retain, nonatomic) NSNumber *totalVideoDuration;
@property (retain, nonatomic) AWECoverPreviewController *previewController;
@property (retain, nonatomic) AWECoverChooseBottomView *bottomViewV2;
@property (retain, nonatomic) AWEVideoCoverFakeProfileView *fakeProfileView;
@property (retain, nonatomic) AWECoverChooseBottomViewModel *bottomViewModel;
@property (nonatomic) struct CGSize { double width; double height; } backupCanvasSize;
@property (nonatomic) BOOL ifChooseNewImage;
@property (nonatomic) BOOL isImageAlbum;
@property (retain, nonatomic) AWECoverTextModel *originCoverTextModel;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (weak, nonatomic) UIViewController *savePresentationOwner;
@property (retain, nonatomic) NSDictionary *chooseCoverExtraAttributes;
@property (retain, nonatomic) UIImageView *interactionImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (void)didClickSaveBtn:(id)a0;
- (void)didClickCancelBtn:(id)a0;
- (id)p_commonTrackParams;
- (id)initWithModel:(id)a0 editService:(id)a1;
- (void)sliderViewTouchBegin;
- (void)sliderViewTouchMoved;
- (id)bottomViewTrackerParams;
- (void)configurePlayer;
- (double)p_previewControllerViewHeight;
- (struct CGSize { double x0; double x1; })p_videoSize;
- (void)p_trackCancelCoverEditWithAlertShow:(id)a0;
- (struct CGSize { double x0; double x1; })p_perferredCoverSize;
- (BOOL)p_hadApplyCanvas;
- (void)didSelectCoverTimeInPercent:(double)a0;
- (void)bottomViewDidTapReset:(id)a0;
- (void)bottomViewShouldStartEditing:(id)a0;
- (double)viewHeightForCoverPreviewController:(id)a0;
- (long long)currentAlbumIndexForPreviewController:(id)a0;
- (struct CGSize { double x0; double x1; })videoSizeForCoverPreviewController:(id)a0;
- (id)previewController:(id)a0 titleModelWithTitle:(id)a1;
- (id)generateCoverTextImage;
- (double)p_currentSelectedCoverTime;
- (void)p_dismissForSave:(BOOL)a0;
- (void)p_trackSaveCoverEdit;
- (long long)chooseImageWithPercent:(double)a0;
- (long long)p_currentAlbumIndex;
- (double)uploadImageWidth;
- (void)p_resetTitleImpl;
- (void)p_trackCoverTextReset;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)configureViews;
- (double)fontScale;

@end
