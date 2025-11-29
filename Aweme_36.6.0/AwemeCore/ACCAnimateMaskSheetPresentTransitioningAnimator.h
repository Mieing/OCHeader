@class DUXSheetAnimationModel, UIView;

@interface ACCAnimateMaskSheetPresentTransitioningAnimator : DUXSheetPresentTransitioningAnimator

@property (retain, nonatomic) DUXSheetAnimationModel *animationModel;
@property (nonatomic) unsigned long long sheetAlignment;
@property (retain, nonatomic) UIView *contentView;

- (void)animateTransition:(id)a0;
- (void).cxx_destruct;

@end
