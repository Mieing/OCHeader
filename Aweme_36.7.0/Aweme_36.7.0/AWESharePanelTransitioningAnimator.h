@class NSString, UIView;

@interface AWESharePanelTransitioningAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
