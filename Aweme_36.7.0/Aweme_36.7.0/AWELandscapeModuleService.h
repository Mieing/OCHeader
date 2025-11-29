@class NSString, UIViewController;
@protocol AWELandscapeFeedViewControllerProtocol;

@interface AWELandscapeModuleService : HTSService <AWELandscapeModuleService>

@property (nonatomic) BOOL hasEnteredLandscape;
@property (retain, nonatomic) UIViewController<AWELandscapeFeedViewControllerProtocol> *currentLandscapeFeedVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)landscapeAutoRotateConfig;
+ (Class)playbackSettingConfig;
+ (BOOL)isInLandscapeCommentSplitScreen;
+ (BOOL)isInLandscapeFullScreen;
+ (BOOL)supportMixVideoSplitScreen;
+ (BOOL)enableLandscapeBigFont;
+ (Class)relatedVideoTrackService;

- (void)openXiGuaWithModel:(id)a0 pageType:(long long)a1 enterMethod:(id)a2 enterFrom:(id)a3;
- (id)landscapeHolder;
- (Class)landscapeViewControllerClass;
- (BOOL)isQuitFromLandscape;
- (void)setIsQuitFromLandscapeWithValue:(BOOL)a0;
- (BOOL)isInLandScapeStatus;
- (BOOL)isSlideEnableInLandScape;
- (id)beforeEnteringLandscapeFeedNotificationName;
- (id)afterExitingLandscapeFeedNotificationName;
- (id)getLandscapeVideoEntryView;
- (BOOL)canShowLandScapeEntryWithModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcuteVideoRealFrame:(id)a0 model:(id)a1 referString:(id)a2;
- (BOOL)shouldAvoidOverlapWithPlayer:(id)a0 model:(id)a1;
- (double)calcuteLandscapeEntryViewTopOffset:(id)a0 model:(id)a1 referString:(id)a2;
- (id)getLandScapeTransitionAnimatorWithType:(long long)a0 dadaSource:(id)a1;
- (BOOL)isFromNormalMixVideoForLandscapeWithModel:(id)a0 viewController:(id)a1 referString:(id)a2 enterFrom:(id)a3;
- (BOOL)isFromPersonalPageForLandscapeWithModel:(id)a0 viewController:(id)a1 referString:(id)a2 enterFrom:(id)a3;
- (BOOL)isMixVideoWithModel:(id)a0;
- (BOOL)isLandScapeFirst;
- (BOOL)optimizeLandscapeTransition;
- (BOOL)isInLandscapeLiveScene;
- (id)longVideoDataController;
- (id)landscapeVideoViewControllerWithInteractionStyle:(unsigned long long)a0;
- (id)landscapePageContextWithModel:(id)a0 playerViewController:(id)a1;
- (id)landscapePageContextWithModel:(id)a0 playerViewController:(id)a1 dataController:(id)a2 initialIndex:(long long)a3;
- (id)landscapeFeedViewControllerWithPageContext:(id)a0;
- (id)landscapeNavigationControllerWithRootViewController:(id)a0;
- (id)paymentView;
- (id)paymentDeviceLimitView;
- (id)paymentMaskView;
- (id)longVideoAPIMonitor;
- (id)guideXiGuaManager;
- (id)guideVideoPopView;
- (id)xiguaThemeModelWithPopViewStyle:(long long)a0;
- (id)qingtaoThemeModelWithPopViewStyle:(long long)a0;
- (BOOL)isPlayerViewControllerInLandscape:(id)a0;
- (Class)interactionViewUtil;
- (Class)landscapeUtil;
- (id)trackParamsForVideoPlayQualityWithModel:(id)a0 logExtraDict:(id)a1;
- (id)trackParamsForVideoBlockWithModel:(id)a0 logExtraDict:(id)a1;
- (id)trackParamsForVideoPlayFailedWithModel:(id)a0 logExtraDict:(id)a1;
- (id)landscapeCellManager;
- (void)enterLandSacpeVideoControllerWithPlayer:(id)a0 contextConfigInfo:(id)a1 landScapeDelegate:(id)a2 transitioningDelegate:(id)a3 configBeforeEnterBlock:(id /* block */)a4 configAfterEnterBlock:(id /* block */)a5;
- (BOOL)enableOptimizeStuck;
- (void).cxx_destruct;

@end
