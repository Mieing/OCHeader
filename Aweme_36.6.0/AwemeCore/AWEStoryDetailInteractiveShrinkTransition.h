@class UIViewController, NSString, UIView, UITabBar, NSObject;
@protocol AWEStoryDetailTransitionOuterProvider, AWEAwemeBizPlayVideoProtocol, AFDRichContentContainerViewControllerProtocol, IESVideoPlayerProtocol;

@interface AWEStoryDetailInteractiveShrinkTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) NSObject<AWEStoryDetailTransitionOuterProvider> *toCP;
@property (nonatomic) BOOL isFromRichContainer;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UITabBar *tabbar;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (retain, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol> *fromPlayer;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) UIViewController<AFDRichContentContainerViewControllerProtocol> *toContainer;
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
- (id)addMaskViewToContainerView:(id)a0 aboveSubview:(id)a1;
- (id)addSnapshotTabbarToContainerView:(id)a0 tabbar:(id)a1 context:(id)a2;
- (id)addFromViewToContainerView:(id)a0 fromPlayer:(id)a1;
- (void)updateToContainerPlayerControllerIfFinished;
- (void)updateFromPlayerPlayerControllerIfCancelled;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
