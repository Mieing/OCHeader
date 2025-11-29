@interface BDDPToastInfo : NSObject

+ (void)BDDP_AWE_showSuccess:(id)a0;
+ (void)BDDP_AWE_showError:(id)a0;
+ (void)BDDP_AWE_show:(id)a0;
+ (void)BDDP_AWE_show:(id)a0 onView:(id)a1;
+ (void)BDDP_AWE_showError:(id)a0 onView:(id)a1;
+ (void)BDDP_AWE_showSuccess:(id)a0 onView:(id)a1;
+ (void)initialize;

- (void)BDDP_DUX_handleToastOnView:(id)a0 withCenterPoint:(struct CGPoint { double x0; double x1; })a1 animationStyle:(unsigned long long)a2;

@end
