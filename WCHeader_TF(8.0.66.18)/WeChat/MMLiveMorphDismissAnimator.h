@class MMLiveMorphDismissTargetExtraConfig, NSString, UIView;
@protocol MMLiveMorphDismissSource;

@interface MMLiveMorphDismissAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIView *videoView;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (retain, nonatomic) MMLiveMorphDismissTargetExtraConfig *extraConfig;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *customSnapView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) id<MMLiveMorphDismissSource> sourceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitionParameters:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animateNoopTransition:(id)a0;
- (void).cxx_destruct;

@end
