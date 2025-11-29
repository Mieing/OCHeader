@class NSString, UIPanGestureRecognizer;

@interface AWEPadMixVideoRotateAdapter : NSObject <AWEPadMixVideoRotateAdapter, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGPoint { double x; double y; } startContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)weakTargetClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (BOOL)Enable;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (BOOL)isMixVideoSplitStyle;
- (void)performViewWillTransToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)performShowAnimationForRotateWithShow:(BOOL)a0;
- (void)performViewWillTrans;
- (BOOL)supportedInterfaceOrientationsFollowPreViewController;
- (void)updatePanelControllerLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePanelContainerLayoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePanelPositionBeforeShowWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updatePanelControllerLayoutForMultiScreen;
- (BOOL)isCurrentLandscapeWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (id)weakTarget;

@end
