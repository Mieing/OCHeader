@interface MMFinderLiveGlobalRankShiningConfig : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } normalizedOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } absoluteCenter;
@property (nonatomic) double initialScale;
@property (nonatomic) double initialAlpha;
@property (nonatomic) double targetScale;
@property (nonatomic) double targetAlpha;
@property (nonatomic) double animationDuration;
@property (nonatomic) double startTime;

+ (id)configForAudienceJoin;
+ (id)configForGlobalRankSignWithRank:(unsigned long long)a0;
+ (id)configWithNormalizedOrigin:(struct CGPoint { double x0; double x1; })a0 initScale:(double)a1 initAlpha:(double)a2 targetScale:(double)a3 targetAlpha:(double)a4 duration:(double)a5 startTime:(double)a6;
+ (id)configWithAbsoluteCenter:(struct CGPoint { double x0; double x1; })a0 initScale:(double)a1 initAlpha:(double)a2 targetScale:(double)a3 targetAlpha:(double)a4 duration:(double)a5 startTime:(double)a6;

@end
