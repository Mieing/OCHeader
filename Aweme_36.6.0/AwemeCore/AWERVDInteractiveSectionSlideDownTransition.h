@class AWEPlayVideoViewController, NSString, UITabBarController, UIView, UIViewController;
@protocol AWERVDSlideTransitionOuterContentProvider, IESVideoPlayerProtocol, AWERVDSlideTransitionInnerContentProvider;

@interface AWERVDInteractiveSectionSlideDownTransition : NSObject <AWETransitionContextProvider>

@property (nonatomic) BOOL isVideoMode;
@property (nonatomic) BOOL isNeedOutPlay;
@property (nonatomic) BOOL shouldUpdatePlayerController;
@property (nonatomic) BOOL alwaysUseFromPlayerControllerWhenTransition;
@property (nonatomic) BOOL updateProgress;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *toView;
@property (retain, nonatomic) UIView *feedInteractionView;
@property (retain, nonatomic) UIView *bottomInteractionView;
@property (retain, nonatomic) UIView *feedBootomView;
@property (retain, nonatomic) UIView *fromVCViewImage;
@property (retain, nonatomic) UIView *toVCView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromVCViewStartFrame;
@property (retain, nonatomic) AWEPlayVideoViewController *fromPlayer;
@property (retain, nonatomic) AWEPlayVideoViewController *toPlayer;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> toplayerController;
@property (retain, nonatomic) id fromContext;
@property (retain, nonatomic) id toContext;
@property (retain, nonatomic) UIViewController<AWERVDSlideTransitionInnerContentProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWERVDSlideTransitionOuterContentProvider> *toCP;
@property (nonatomic) unsigned long long triggerDirection;
@property (nonatomic) unsigned long long allowDirection;
@property (nonatomic) BOOL disablePlay;
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
- (void)cancelSlideDownTransition;
- (void)cancelAnimationForNoUpdateProgress;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
