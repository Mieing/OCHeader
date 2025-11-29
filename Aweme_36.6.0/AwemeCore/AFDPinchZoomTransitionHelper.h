@class NSString, UIViewController;
@protocol AFDPureModePageViewControllerProtocol;

@interface AFDPinchZoomTransitionHelper : NSObject <AFDPinchZoomTransitionHelperProtocol>

@property (weak, nonatomic) id contextProvider;
@property (retain, nonatomic) UIViewController<AFDPureModePageViewControllerProtocol> *pureModePageVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInPureModePage;
+ (long long)scaleModeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (double)scaleThresholdForPatternType:(unsigned long long)a0;
+ (BOOL)shouldStartZoomInTranstionWithAwemeModel:(id)a0;
+ (BOOL)enableFollowPinchScale;
+ (BOOL)isPureModePageTransition;
+ (BOOL)canEnterPinchViewForAwemeModel:(id)a0;
+ (BOOL)onlyZoomInWithAwemeModel:(id)a0;
+ (BOOL)isPureModePageAtTop;
+ (void)dismissPureModePageWhenResetIfNeeded;
+ (void)layoutImageView:(id)a0 inSuperview:(id)a1 withContentMode:(unsigned long long)a2;
+ (void)triggerHaptic;
+ (void)layoutImageView:(id)a0 inSuperview:(id)a1;
+ (double)scaleThresholdToSinglePage;
+ (double)scaleLowerLimitForPatternType:(unsigned long long)a0;
+ (id)tryToGetPureModePageVC;
+ (BOOL)shouldFollowPinchScaleWithAwemeModel:(id)a0;
+ (BOOL)isPureModePageZoomOutTransition;

- (void).cxx_destruct;

@end
