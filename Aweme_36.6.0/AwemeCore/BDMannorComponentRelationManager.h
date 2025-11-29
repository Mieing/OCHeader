@interface BDMannorComponentRelationManager : NSObject

+ (void)setupAnimationInitalStateWith:(id)a0 componentRelation:(id)a1;
+ (void)startShowComponentWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3;
+ (void)startHideComponentWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3;
+ (void)startShowComponentWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)p_startToShowToHideAnimationTypeMoveLeftToRightWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)p_startToShowToHideAnimationTypeUpToFadeInWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)p_startToShowToHideAnimationTypeDownToFadeInWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)startHideComponentWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)p_startToHideToShowAnimationTypeMoveLeftToRightWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)p_startToHideToShowAnimationTypeUpToFadeInWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (void)p_startToHideToShowAnimationTypeDownToFadeInWith:(id)a0 componentRelation:(id)a1 componentMap:(id)a2 scene:(id)a3 styleTemplate:(id)a4 mannorComponent:(id)a5;
+ (id)p_getToHideViewArrayWith:(id)a0 componentMap:(id)a1 scene:(id)a2 styleTemplate:(id)a3 mannorComponent:(id)a4 isShowAnimation:(BOOL)a5;
+ (void)p_handleAnimationWithFirstStepViewArray:(id)a0 firstStepTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 secondStepViewArray:(id)a2 secondStepTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
+ (void)p_handleAnimationWithFirstStepViewArray:(id)a0 firstStepTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 firstStepAlpha:(double)a2 secondStepViewArray:(id)a3 secondStepTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 secondStepAlpha:(double)a5;

@end
