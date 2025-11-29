@class UIView, AWEAdTwistImageInfo, AWEAwemeModel, NSTimer, YYDiskCache, NSString, BDASplashComplianceFactory, NSObject, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, BDASplashComplianceViewHolder, AWECommerceComponentContext;

@interface AWEAdTwistImageManager : NSObject <BDASplashComplianceBaseDelegate, BDASplashComplianceViewHolderDelegate, AWECommerceComponentProtocol, AWEAdTwistImageManager>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAdTwistImageInfo *twistInfo;
@property (nonatomic) BOOL topliveShowing;
@property (nonatomic) unsigned long long showImagePhase;
@property (nonatomic) BOOL hidding;
@property (retain, nonatomic) NSTimer *hideGuideInfoTimer;
@property (retain, nonatomic) NSTimer *clickDebounceTimer;
@property (nonatomic) BOOL bouncing;
@property (copy, nonatomic) id /* block */ videoPeriodHandler;
@property (copy, nonatomic) id /* block */ videoLoopHandler;
@property (copy, nonatomic) id /* block */ showAdOperationGuideHandler;
@property (copy, nonatomic) id /* block */ closeAdOperationGuideHandler;
@property (copy, nonatomic) id /* block */ sharePanelWillShowHandler;
@property (copy, nonatomic) id /* block */ sharePanelDidDismissHandler;
@property (retain, nonatomic) YYDiskCache *twistAdMaterialCache;
@property (retain, nonatomic) NSObject<BDASplashComplianceViewHolder> *viewHolder;
@property (retain, nonatomic) UIView *twistView;
@property (retain, nonatomic) BDASplashComplianceFactory *factory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (void)removeAllCache;
+ (BOOL)isTwistImageAd:(id)a0;
+ (id)getTwistInfo:(id)a0;
+ (id)twistAdMaterialCache;
+ (void)downloadResourceIfNeededWithURL:(id)a0;
+ (void)removeResourceIfNeededWithURL:(id)a0;
+ (void)preDownloadTwistMaterialIfNeeded:(id)a0;
+ (void)removeMaterialWithAwemeIfNeeded:(id)a0;

- (void)setHide:(BOOL)a0;
- (void)configSelf;
- (void)enterWithInteractionViewController:(id)a0 model:(id)a1;
- (void)hideGuideView;
- (void)showImageIfNeeded;
- (void)replayShow;
- (id)updatedTwistParams:(id)a0;
- (BOOL)selectedChannelCanInsertSplash;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashJumpWithParams:(id)a0 animationType:(long long)a1;
- (void)splashTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashTrackALogWithInfo:(id)a0;
- (void)splashTrackNoAdEvent:(id)a0 params:(id)a1;
- (id)splashImageDataForKey:(id)a0;
- (void)splashOptionalDataForKey:(id)a0 completionBlock:(id /* block */)a1;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)hide;
- (void)viewWillAppear;
- (void)reset;
- (void)show;
- (void)showImage;
- (void)viewWillDisappear;

@end
