@class NSString, UITabBarController, UIView, UIViewController;
@protocol AWEAvatarToFullScreenOutterTransitionContextProvider, AWEAvatarToFullScreenInnerTransitionContextProvider;

@interface AWEAvatarToFullScreenInteractiveShrinkTransition : NSObject <AWETransitionContextProvider>

@property (retain, nonatomic) UIView *fromVCSnapshot;
@property (retain, nonatomic) UIView *toVCSnapshot;
@property (retain, nonatomic) UIView *avatarStartView;
@property (retain, nonatomic) UIView *avatarTargetView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *avatarStartSnapShot;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) UIView *snapshotTabbar;
@property (retain, nonatomic) UIView *tabbar;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarStartFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarTargetFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomMinFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomStartFrame;
@property double translateY;
@property double scale;
@property (retain, nonatomic) UIViewController<AWEAvatarToFullScreenInnerTransitionContextProvider> *fromCP;
@property (retain, nonatomic) UIViewController<AWEAvatarToFullScreenOutterTransitionContextProvider> *toCP;
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
- (struct CGPoint { double x0; double x1; })resistancePointForCurrentPoint:(struct CGPoint { double x0; double x1; })a0 startPoint:(struct CGPoint { double x0; double x1; })a1;
- (double)resistanceFunction:(double)a0;
- (struct CGPoint { double x0; double x1; })transformPodintFrom:(struct CGPoint { double x0; double x1; })a0 start:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (unsigned long long)interactionType;

@end
