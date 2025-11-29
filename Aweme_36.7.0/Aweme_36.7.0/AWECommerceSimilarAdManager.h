@class AWEGradientView, NSString, NSTimer, AWEAwemeModel, UIView, AWEUILoadingView, UIViewController;
@protocol AWEFeedLokiManager, AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext, AWEAwemePlayInteractionCommerceDelegate;

@interface AWECommerceSimilarAdManager : NSObject <AWECommerceComponentProtocol, AWECommerceSimilarAdManager, AWECommerceSimilarAdMessage, AWECommerceLandingPageTransferMessage, AWEGokuPluginTargetProtocol>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate> *interactionViewController;
@property (retain, nonatomic) UIView *feedPlayerViewContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerViewInitialFrame;
@property (retain, nonatomic) NSTimer *pageLandingTimer;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEGradientView *maskView;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEFeedLokiManager> UIDelegate;
@property (nonatomic) BOOL lokiInitialSuccess;
@property (nonatomic) BOOL similarAdShowSuccess;
@property (copy, nonatomic) NSString *similarAdLokiComponentId;
@property (copy, nonatomic) id /* block */ resetOtherComponentsBlock;
@property (copy, nonatomic) id /* block */ resetSimilarAdManagerBlock;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (long long)expectShowSimilarAdGAP;
+ (BOOL)shouldShowSimilarAd:(id)a0;
+ (void)clearOriginModel:(id)a0 initNewAsyncModel:(id)a1;
+ (BOOL)canAsyncFetchSimilarAdData:(id)a0;
+ (void)startAsyncFetchSimilarAdData:(id)a0;
+ (BOOL)isSimilarAdShowing:(id)a0;
+ (BOOL)isSimilarAdShouldShowGap0:(id)a0;
+ (BOOL)similarAdShouldAutoPlayAnimate:(id)a0;
+ (void)resetSimilarAdToInitialStatus:(id)a0;
+ (BOOL)shouldSimilarAdCancelTrackShow:(id)a0;
+ (BOOL)shouldEnableOptimizeForGAPN:(id)a0;
+ (void)makeTempSimilarAdLokiComponentString:(id)a0;

- (void)willDisplayCellWithContext:(id)a0;
- (BOOL)hasCacheFor:(id)a0;
- (id)similarCacheModel;
- (void)setupSimilarAdManagerWith:(id)a0 model:(id)a1;
- (BOOL)shouldInterruptSlideDownAndShow;
- (void)similarAdShowContent;
- (void)lokiComponentStatusChange:(long long)a0;
- (id)asyncRequestURL;
- (id)asyncRequestParams;
- (Class)asyncRequestModelClass;
- (void)asyncRequestAdResult:(BOOL)a0 model:(id)a1;
- (void)startTransferToLandingPageVC;
- (void)finishTransferToLandingPageVC;
- (void)findPlayerController:(id)a0;
- (void)startSharedVideoAnimation:(id)a0;
- (void)trackSimilarAdStage:(id)a0 resultType:(long long)a1 extraData:(id)a2;
- (void)resetOtherComponents;
- (void)handleRequestTimerAction:(id)a0;
- (void)enablePageLandingTimer;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (unsigned long long)moduleNames;
- (void)reset;
- (void)willDisplay;

@end
