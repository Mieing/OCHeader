@interface AWEAnimationCommonOptimizer : NSObject

@property (nonatomic) BOOL enableCoreAnimationOpt;
@property (nonatomic) double animationDelay;

+ (BOOL)enableMusicCAAnimationOpt;
+ (BOOL)enableMusicAnimationOpt;
+ (BOOL)enableAnimationWithKey:(id)a0;
+ (float)stopAnimationDurationThreshold;
+ (id)optimizer;

@end
