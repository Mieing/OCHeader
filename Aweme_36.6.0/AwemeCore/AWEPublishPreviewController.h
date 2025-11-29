@class UIView, AWEVideoImageGenerator, NSArray, UIImage, AWEVideoPublishViewModel, UIImageView, UIButton, NSString, AWEStudioComposerPublishBasicFeature, UIViewController, AWEStickerContainerFakeProfileView;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishPreviewController : UIViewController <AWEZoomTransitionInnerContextProvider, UIGestureRecognizerDelegate, ACCEditPreviewMessageProtocol, AWEStudioTransitionPreviewerToPublisherContextProvider>

@property (nonatomic) long long tryPlayCount;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIView *gestureMaskView;
@property (retain, nonatomic) UIImage *previewImage;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) NSArray *observers;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEVideoImageGenerator *imageGenerator;
@property (nonatomic) double currentPlayerTime;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *chooseCoverButton;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) BOOL isTapGesture;
@property (nonatomic) BOOL isBackButtonClick;
@property (nonatomic) BOOL isPublishButtonClick;
@property (copy, nonatomic) id /* block */ publishDidClickBlock;
@property (retain, nonatomic) AWEStickerContainerFakeProfileView *fakeFeedInfoView;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (copy, nonatomic) id /* block */ chooseCoverDidClickedBlock;
@property (weak, nonatomic) UIViewController *presentationOwner;
@property (nonatomic) BOOL saveCover;
@property (retain, nonatomic) AWEStudioComposerPublishBasicFeature *basicFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked:(id)a0;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (void)closeSelf;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (void)publishButtonClicked:(id)a0;
- (void)loadPlayer;
- (void)p_trackQuitEvent;
- (BOOL)isCFFromSocialCamera;
- (void)configPublishButtonIconWithArrowGroup:(id)a0;
- (void)chooseButtonClicked:(id)a0;
- (void)p_configUIStyle;
- (id)p_modernStickerContainerWithModels:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getValidPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithPublishViewModel:(id)a0 editService:(id)a1 sequenceEditService:(id)a2 previewImage:(id)a3;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
