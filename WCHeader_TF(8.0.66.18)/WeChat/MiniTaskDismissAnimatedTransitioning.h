@class UIImageView, MiniTaskAnimiatedTransitioningConfig, NSString;

@interface MiniTaskDismissAnimatedTransitioning : NSObject <IMiniMizeUserdRecordUpdateExt, UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) MiniTaskAnimiatedTransitioningConfig *config;
@property (retain, nonatomic) UIImageView *snapshotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)onTaskSnapShotUpdate:(id)a0 snapshot:(id)a1;
- (void).cxx_destruct;

@end
