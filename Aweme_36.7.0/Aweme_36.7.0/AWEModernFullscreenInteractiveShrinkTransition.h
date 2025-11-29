@class NSString, UITabBarController, UIView, UIViewController;
@protocol AWEModernFullscreenTransitionInnerContextProvider, AWEModernFullscreenTransitionOuterContextProvider, AFDSlidesViewProtocol, AWEPlayVideoViewControllerProtocol, IESVideoPlayerProtocol, AFDRichContentContainerViewControllerProtocol;

@interface AWEModernFullscreenInteractiveShrinkTransition : NSObject <AWETransitionContextProvider>

@property (class, nonatomic) BOOL fixFromVC;
@property (class, nonatomic) BOOL fixMaskView;

@property (nonatomic) BOOL isVideoMode;
@property (nonatomic) BOOL isAlbum;
@property (nonatomic) BOOL disableSyncReferString;
@property (nonatomic) BOOL disableTileSyncPlay;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *fromSnapView;
@property (retain, nonatomic) UIView *toSnapView;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *toImageSliderView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *fromPlayer;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *toPlayer;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) id fromContext;
@property (retain, nonatomic) id toContext;
@property (retain, nonatomic) id<AFDRichContentContainerViewControllerProtocol> fromContainer;
@property (retain, nonatomic) id<AFDRichContentContainerViewControllerProtocol> toContainer;
@property (retain, nonatomic) UIViewController<AWEModernFullscreenTransitionInnerContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWEModernFullscreenTransitionOuterContextProvider> *toCP;
@property (retain, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL richAwemeUseRefinedZoom;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } richAwemeRefinedZoomEndMaskFrame;
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
- (BOOL)syncGetSearchInnerFeedBackOptimizeV2;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
