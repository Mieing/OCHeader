@class NSString, UIViewController;
@protocol AWETeenPureModePageViewControllerProtocol;

@interface AWETeenPinchZoomTransitionHelper : NSObject <AWETeenPinchZoomTransitionHelperProtocol>

@property (weak, nonatomic) id contextProvider;
@property (retain, nonatomic) UIViewController<AWETeenPureModePageViewControllerProtocol> *pureModePageVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInPureModePage;
+ (double)scaleThresholdForPatternType:(unsigned long long)a0;
+ (BOOL)shouldStartZoomInTranstionWithAwemeModel:(id)a0;
+ (BOOL)isPureModePageTransition;
+ (BOOL)onlyZoomInWithAwemeModel:(id)a0;
+ (void)dismissPureModePageWhenResetIfNeeded;
+ (void)changeToAnchorPoint:(struct CGPoint { double x0; double x1; })a0 withoutMovingForView:(id)a1;
+ (id)tryToGetPureModePageVC;

- (void).cxx_destruct;

@end
