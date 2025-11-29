@class IESLiveUserPreviewLikeDigAnimationView, IESLiveUserCardStore;

@interface IESLiveUserCardMenuView : UIView

@property (retain, nonatomic) IESLiveUserPreviewLikeDigAnimationView *animationContain;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) double viewWidth;

- (void)cofingWithStore:(id)a0;
- (void)configWithActions:(id)a0;
- (double)widthOfMenuView;
- (void)addAllActionsToMore:(id)a0;
- (id)renderActionItem:(id)a0 tag:(long long)a1;
- (id)createSeperatorView;
- (void)onMoreTapped:(id)a0;
- (id)createActionButton:(id)a0 tag:(long long)a1;
- (BOOL)showLikeButtonWithConfig:(id)a0;
- (void)renderLiekButton:(id)a0;
- (BOOL)actionsContainGame:(id)a0;
- (void)onMoreTappedWhenRelationEntranceShow:(id)a0;
- (void)onItemSelected:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
