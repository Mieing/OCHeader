@class NSString, UIView, NSObject, UIViewController;
@protocol AWEAlbumDetailPageTransitionProtocol, AWEPlayVideoViewControllerProtocol, AFDSlidesViewProtocol;

@interface AWESearchRichAlbumPanShrinkTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSObject<AWEAlbumDetailPageTransitionProtocol> *fromCP;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *fromPlayer;
@property (retain, nonatomic) UIView *toView;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *toImageSliderView;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *toPlayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCustomAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)updateAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)finishAnimationWithCompletionBlock:(id /* block */)a0;
- (void)cancelAnimationWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)allowTriggerDirectionForContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
