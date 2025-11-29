@class NSString, UIViewController, UIView;
@protocol IESLLPhotosPreviewFadeOutTransitionContextProvider, IESLLPhotosPreviewFadeInTransitionContextProvider;

@interface IESLLPhotosPreviewInteractiveFadeOutTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIView *fromVCSnapshot;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (retain, nonatomic) UIViewController<IESLLPhotosPreviewFadeOutTransitionContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<IESLLPhotosPreviewFadeInTransitionContextProvider> *toCP;
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
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
