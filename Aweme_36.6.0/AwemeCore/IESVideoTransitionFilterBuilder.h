@interface IESVideoTransitionFilterBuilder : NSObject

+ (id)buildTransFilter:(id)a0 renderer:(id)a1 context:(id)a2;
+ (void)addProgressForTransFilter:(id)a0 mediaInfo:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (BOOL)isOverlapType:(long long)a0;
+ (BOOL)isNeedProgressForType:(long long)a0;
+ (id)buildTransFilter:(id)a0 context:(id)a1;
+ (id)picMovieHTransition:(id)a0;
+ (id)picMoviePTransition:(id)a0;
+ (id)overlapBlendTransition:(id)a0;
+ (id)overlapLeftMoveTransition:(id)a0;
+ (id)overlapRightMoveTransition:(id)a0;
+ (id)blackTransition:(id)a0;
+ (id)whiteTransition:(id)a0;
+ (id)dissolveTransition:(id)a0;
+ (id)downOffsetTransition:(id)a0;
+ (id)downWipeTransition:(id)a0;
+ (id)horizonalLineTransition:(id)a0;
+ (id)roundMaskTransition:(id)a0;
+ (id)upOffsetTransition:(id)a0;
+ (id)upWipeTransition:(id)a0;
+ (id)verticalLineTransition:(id)a0;
+ (id)zoominBlurTransition:(id)a0;
+ (id)zoomoutBlurTransition:(id)a0;
+ (double)getOverLapDurationForType:(long long)a0 transDuration:(double)a1;

@end
