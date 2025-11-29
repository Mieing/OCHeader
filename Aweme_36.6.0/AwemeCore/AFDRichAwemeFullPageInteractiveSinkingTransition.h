@class NSString, UITabBarController, UIView, UIViewController;
@protocol AFDRichAwemeFullPageInnerContextProvider, AFDRichAwemeFullPageOuterContextProvider, AWEPlayVideoViewControllerProtocol;

@interface AFDRichAwemeFullPageInteractiveSinkingTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIView *imageSliderView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *tabbar;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (nonatomic) double initialContentOffsetY;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sliderStartFrame;
@property (retain, nonatomic) UIViewController<AFDRichAwemeFullPageInnerContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AFDRichAwemeFullPageOuterContextProvider> *toCP;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *videoController;
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
- (void)moveImageSliderViewIntoContainerViewIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
