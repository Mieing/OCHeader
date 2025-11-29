@class UIScreenEdgePanGestureRecognizer, NSString, MMWebImageView, WAGameRollProgressView, UIImageView, WCTagsView, WAMenuPopInteractiveTransition, MMUILabel, MMUIButton;

@interface WAGameCircleProgressLoadingViewController : WACircleProgressLoadingViewController <MMWebImageViewDelegate, WAPopInteractiveTransitionDelegate, WAAppTaskSystemCoverViewDataSource>

@property (retain, nonatomic) UIImageView *originalImageView;
@property (retain, nonatomic) MMUILabel *gameProverbLabel;
@property (retain, nonatomic) UIImageView *gameProverbLogo;
@property (retain, nonatomic) MMWebImageView *ageAppropriateView;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) NSString *customProgressBarColor;
@property (nonatomic) unsigned long long startDownloadCoverTimeInMs;
@property (retain, nonatomic) MMWebImageView *customloadingImg;
@property (nonatomic) BOOL hasCustomImgReady;
@property (nonatomic) BOOL hasSlashReady;
@property (nonatomic) BOOL isLandScape;
@property (retain, nonatomic) NSString *ageAppropriateUrl;
@property (retain, nonatomic) WAGameRollProgressView *gameloadingAnimationView;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture;
@property (retain, nonatomic) WAMenuPopInteractiveTransition *dismissInteractiveTransition;
@property (retain, nonatomic) MMUIButton *requestFullScreenBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0 pkgConfig:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)initSubViews;
- (void)initGameTagToken;
- (void)initGameProverb;
- (BOOL)needWeakNetTips;
- (void)initAgeAppropriate;
- (void)viewDidLayoutSubviews;
- (void)onReturn;
- (void)finishedSlash;
- (void)initCusinittomLoadingView:(id)a0 pkgConfig:(id)a1;
- (void)checkShowCustomLoadingBgView;
- (void)showCustomLoadingBgView;
- (BOOL)shouldUseSmallMenu;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onLoadImageOK:(id)a0;
- (BOOL)capsuleMenuHidden;
- (BOOL)systemCoverViewHidden;
- (void)onAgeAppropriateClick;
- (void)onPopBackInteractiveTransitionBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (id)getGameProverbLogo;
- (void).cxx_destruct;

@end
