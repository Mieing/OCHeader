@class NSString, UITabBarController, UIView, UIViewController;
@protocol CAKAlbumTransitionDelegateProtocol, CAKAlbumZoomTransitionInnerContextProvider, CAKAlbumZoomTransitionOuterContextProvider;

@interface CAKInteractiveShrinkTransition : NSObject <CAKAlbumTransitionContextProvider>

@property (retain, nonatomic) UIView *fromVCSnapshot;
@property (retain, nonatomic) UIView *toVCSnapshot;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *fromViewMigrationContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) BOOL migrationMode;
@property (nonatomic) double currentTransitionTabbarAnimationDuration;
@property (weak, nonatomic) UIViewController<CAKAlbumZoomTransitionInnerContextProvider> *fromCP;
@property (weak, nonatomic) UIViewController<CAKAlbumZoomTransitionOuterContextProvider> *toCP;
@property (weak, nonatomic) id<CAKAlbumTransitionDelegateProtocol> transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowTriggerDirectionForContext:(id)a0;
- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isForAppear;
- (id)initWithTransitionDelegate:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
