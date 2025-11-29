@interface IESLivePopupAnimation : NSObject

+ (id)timingFunctionWith:(double)a0;
+ (void)animationShow:(BOOL)a0 panelDiffLength:(double)a1 animation:(id /* block */)a2 completion:(id /* block */)a3;
+ (double)standard450Height;
+ (double)durationWith:(double)a0 isShow:(BOOL)a1;
+ (void)animationShow:(BOOL)a0 panelDiffLength:(double)a1 isDirectionLandscape:(BOOL)a2 animation:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)timingFunctionWith:(double)a0 isDirectionLandscape:(BOOL)a1;
+ (double)durationWith:(double)a0 isShow:(BOOL)a1 isDirectionLandscape:(BOOL)a2;
+ (id)animationShow:(BOOL)a0 length:(double)a1 isDirectionLandscape:(BOOL)a2 from:(id)a3 to:(id)a4;
+ (double)standardHeightWith:(double)a0;
+ (double)standardFullHeight;
+ (id)animationShow:(BOOL)a0 length:(double)a1 from:(id)a2 to:(id)a3;
+ (double)standard73PercentHeight;

@end
