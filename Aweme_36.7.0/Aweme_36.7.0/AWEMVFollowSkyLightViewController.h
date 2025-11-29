@class NSString, UIView, AWEGradientView, UIViewController;
@protocol AWELiveSkylightViewControllerProtocol, AWEConcernSkylightCapsuleViewProtocol;

@interface AWEMVFollowSkyLightViewController : AWEDCFeedBaseController <AWEUserMessage, AWEMVFollowSkyLightViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWELiveSkylightViewControllerProtocol> *skylightController;
@property (retain, nonatomic) AWEGradientView *skyLightBackgroundView;
@property (retain, nonatomic) UIView *overlapCoverView;
@property (nonatomic) BOOL shouldAdjustEntranceView;
@property (nonatomic) BOOL firstRefreshFinished;
@property (retain, nonatomic) UIView<AWEConcernSkylightCapsuleViewProtocol> *capsuleView;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL isCapsuleCausedSkylightShowing;
@property (nonatomic) BOOL isSkylightInAnimating;
@property (nonatomic) BOOL isCapsuleShowing;
@property (nonatomic) BOOL isUserTouchedBeforeSkylightReturn;
@property (nonatomic) BOOL isUserDragging;
@property (nonatomic) BOOL isSkyLightShowInCurrentLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)setupCapsuleView;
- (void)hideCapsuleView;
- (BOOL)isShowingEmptyListWithContentVC:(id)a0;
- (BOOL)isSkyLightNotEmpty;
- (double)skyLightViewHeight;
- (double)skyLightViewOffset;
- (void)updateSkyLightView;
- (void)tapCapsuleView;
- (void)showSkylightView;
- (void)trackSkylightClose;
- (void)hideSkylightView;
- (void)showCapsuleView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themeDidChange;
- (void)containerViewDidLoad;

@end
