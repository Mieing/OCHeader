@class NSString, DUXSheetAnimationModel, UIView;

@interface DUXSheetDismissTransitioningAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) DUXSheetAnimationModel *animationModel;
@property (nonatomic) unsigned long long sheetAlignment;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationModel:(id)a0 withSheetAlignment:(unsigned long long)a1 withContentView:(id)a2;
- (id)initWithSheetAlignment:(unsigned long long)a0 withContentView:(id)a1;
- (id)initWithAnimationModel:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
