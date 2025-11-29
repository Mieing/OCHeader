@interface AEKVideoAbilityUtils : NSObject

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })videoClipMinDuration;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 byScale:(double)a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })maxTransitionDurationForVideoClip:(id)a0 video:(id)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })appropriateTimeRangeForVideoClip:(id)a0 video:(id)a1;
+ (id)transitionResourceIdWith:(id)a0;

@end
