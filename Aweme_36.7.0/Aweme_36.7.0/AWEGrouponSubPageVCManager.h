@class UIView, NSString, AWEGrouponHalfScreenDismissAnimationController, NSMutableDictionary, AWEGrouponC2TopAngleMaskView, AWEGrouponHalfScreenAnimation, NSMutableArray, UIViewController, AWENearbyOpenSubPageModel;
@protocol AWEGrouponSubPageVCDelegate, AWENearbyGrouponSubPageViewControllerProtocol;

@interface AWEGrouponSubPageVCManager : NSObject <AWEGrouponHalfScreenDismissAnimationProvider, AWENearbyGrouponSubPageContianerHelper, AWERouterDelegate, AWEGrouponFeedEventMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *schemaHandles;
@property (retain, nonatomic) AWENearbyOpenSubPageModel *subpageModelForNoneSearchWillShow;
@property (retain, nonatomic) NSMutableDictionary *showingVCSubpageModels;
@property (retain, nonatomic) AWEGrouponC2TopAngleMaskView *topAngleView;
@property (nonatomic) BOOL subpageIsShowing;
@property (retain, nonatomic) AWENearbyOpenSubPageModel *subpageShowingModel;
@property (nonatomic) BOOL hasRegisterRouter;
@property (weak, nonatomic) UIView *backgroundColorView;
@property (retain, nonatomic) AWEGrouponHalfScreenDismissAnimationController *dismissController;
@property (weak, nonatomic) UIViewController<AWENearbyGrouponSubPageViewControllerProtocol> *willCloseController;
@property (weak, nonatomic) UIView *willCloseView;
@property (weak, nonatomic) UIView *willCloseTargetView;
@property (weak, nonatomic) id<AWEGrouponSubPageVCDelegate> delegate;
@property (weak, nonatomic) AWEGrouponHalfScreenAnimation *currentDismissAnimation;
@property (copy, nonatomic) NSString *animationErrMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)classNameArray;
- (void)nearbyC2FeedViewDidAppearWithContext:(id)a0;
- (void)nearbylifeC2PageFetchFinish:(id)a0 resource:(id)a1 refreshContext:(id)a2 isRefresh:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })findNativeViewRectWith:(id)a0;
- (void)openSubPageWithSubPageModel:(id)a0 delegate:(id)a1 pageType:(long long)a2 willOpenBlk:(id /* block */)a3 hasOpenBlk:(id /* block */)a4 hasClose:(id /* block */)a5;
- (void)clearnSubpageData;
- (void)addSchemaHandle:(id)a0;
- (id)dismissAnimationOfType:(unsigned long long)a0;
- (id)endingAnimationOfType:(unsigned long long)a0;
- (id)subPageModelWithViewController:(id)a0;
- (void)reportHalfScreenCloseAnimationExposeIfNeeded:(id)a0;
- (BOOL)dismissWithAnimationConfig:(id)a0 closeBlock:(id /* block */)a1 closeType:(id)a2;
- (BOOL)dismissUsingNativeRuleWithAnimationConfig:(id)a0 closeBlock:(id /* block */)a1 closeType:(id)a2;
- (void)trackSubpageWillShow:(id)a0 showResult:(BOOL)a1 errorMsg:(id)a2 extraParams:(id)a3;
- (void)trackSubpageBecomeFull:(id)a0 subpageModel:(id)a1;
- (void)trackSubpageWillClose:(id)a0 subpageModel:(id)a1;
- (void)trackSubpageCloseAnimationDone:(id)a0 subpageModel:(id)a1;
- (void)setupHandles;
- (double)arrowOffsetOfHandler:(id)a0;
- (id)handleSchemaWithSubpageUrl:(id)a0 subPageModel:(id)a1;
- (double)getSubpageHeightWithSubPageModel:(id)a0;
- (double)arrowOffsetOfSubpageModel:(id)a0;
- (void)tryShowHightLightTargetWith:(id)a0 subpageModel:(id)a1;
- (void)addMaskColorIfNeeded:(id)a0 subpageModel:(id)a1;
- (void)subpageShouldShowWith:(id)a0 subPageVc:(id)a1;
- (void)subpageHasShow:(id)a0 backgroudView:(id)a1;
- (void)subpageToFullScreen:(id)a0;
- (BOOL)subpageWillCloseWithCloseBlock:(id /* block */)a0 closeType:(id)a1 containerViewController:(id)a2 contentView:(id)a3;
- (void)subpageDidClose:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
