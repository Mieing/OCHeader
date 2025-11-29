@class AWEStickerContainerFakeProfileView, NSString, UIImageView, AWESequencePublishPreviewConfig, UIView, AWEStudioComposerPublishBasicFeature, UIButton;

@interface AWESequencePublishPreviewController : UIViewController <UIGestureRecognizerDelegate, AWEStudioTransitionPreviewerToPublisherContextProvider, ACCEditPreviewMessageProtocol>

@property (retain, nonatomic) AWESequencePublishPreviewConfig *config;
@property (weak, nonatomic) UIView *preSuperview;
@property (retain, nonatomic) UIView *exitView;
@property (nonatomic) BOOL preEnableAutoplay;
@property (nonatomic) BOOL preShowPreview;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *chooseCoverButton;
@property (retain, nonatomic) AWEStickerContainerFakeProfileView *fakeFeedInfoView;
@property (nonatomic) BOOL isPublishButtonClick;
@property (copy, nonatomic) id /* block */ publishDidClickBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ chooseCoverDidClickedBlock;
@property (nonatomic) BOOL saveCover;
@property (nonatomic) BOOL enableNoteStyleCover;
@property (retain, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked:(id)a0;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)p_dismiss;
- (void)updatePreviewImage;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (void)publishButtonClicked:(id)a0;
- (void)configPublishButtonIconWithArrowGroup:(id)a0;
- (void)chooseButtonClicked:(id)a0;
- (void)handleBecomeActiveNotice:(id)a0;
- (void)showSubPlayerIfNeeded;
- (BOOL)useNewSlidesCoverEdit;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)resetPlayer;
- (void)tapAction:(id)a0;

@end
