@interface MiniTaskUIUtil : NSObject

+ (id)defaultIconNameForBizName:(id)a0;
+ (id)bizNameMapToDisplayName:(id)a0;
+ (id)combineViewSnapshotImage:(id)a0 withTabBarSnapshot:(id)a1;
+ (id)combineViewSnapshotImage:(id)a0 withTabBarSnapshot:(id)a1 withAutoGenFakeNavBar:(BOOL)a2;
+ (id)genCircleViewWithWidth:(double)a0 isFill:(BOOL)a1;
+ (id)colorForFakeMaskView;
+ (id)colorForFakeMaskViewInPresentAnimation;
+ (id)colorForPageSpacingInPresentAnimiation;
+ (id)genFakeSnapshotShadowViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)isCGRectApproximatelyEqual:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateExpandedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 left:(double)a1 right:(double)a2 top:(double)a3 bottom:(double)a4;

@end
