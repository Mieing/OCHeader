@class NSString, AWETeenClassicVideoController, UIView, AWETeenSlidesView, UIViewController;
@protocol AWETeenFullscreenTransitionOuterContextProvider, AWETeenVideoContainerProtocol;

@interface AWETeenFullscreenInteractiveShrinkTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (retain, nonatomic) UIViewController *fromVC;
@property (retain, nonatomic) UIViewController<AWETeenFullscreenTransitionOuterContextProvider> *toCP;
@property (retain, nonatomic) AWETeenClassicVideoController *fromPlayer;
@property (retain, nonatomic) AWETeenClassicVideoController *toPlayer;
@property (retain, nonatomic) UIViewController<AWETeenVideoContainerProtocol> *fromContext;
@property (retain, nonatomic) UIViewController<AWETeenVideoContainerProtocol> *toContext;
@property (nonatomic) BOOL noContext;
@property (nonatomic) BOOL isRichTransition;
@property (retain, nonatomic) AWETeenSlidesView *realFromSlideView;
@property (retain, nonatomic) AWETeenSlidesView *realToSlideView;
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
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
