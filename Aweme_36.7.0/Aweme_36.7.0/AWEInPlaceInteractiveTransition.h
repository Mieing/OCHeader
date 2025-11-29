@class NSString, UIView, NSNumber, UIViewController;
@protocol UIViewControllerContextTransitioning, AWEInPlaceTransitionToContentProvider, AWEInPlaceTransitionFromContentProvider, IESVideoPlayerProtocol, AWEAwemePlayVideoProtocol;

@interface AWEInPlaceInteractiveTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIViewController *toVC;
@property (retain, nonatomic) id<AWEInPlaceTransitionFromContentProvider> fromCP;
@property (retain, nonatomic) id<AWEInPlaceTransitionToContentProvider> toCP;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) id<AWEAwemePlayVideoProtocol> fromVideoController;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> fromPlayerController;
@property (retain, nonatomic) id<AWEAwemePlayVideoProtocol> toVideoController;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> toPlayerController;
@property (retain, nonatomic) UIView *fromMoveView;
@property (nonatomic) unsigned long long fromMoveViewIndex;
@property (retain, nonatomic) UIView *fromMoveViewSuperview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromMoveViewStartRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fromMoveViewFinishRect;
@property (retain, nonatomic) id fromIsFingureDragging;
@property (nonatomic) BOOL isMoveFromVC;
@property (retain, nonatomic) NSNumber *fromPlayStateBeforeViewWillDisappear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowTriggerDirectionForContext:(id)a0;
- (void)resetFromPlayerControllerAndMoveView;
- (void)resetToVideoController;
- (void)resetToPlayerControllerAndFinishRect;
- (void)recoverMoveView;
- (void)fixPauseBySingleClickForVideoController:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
