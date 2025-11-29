@interface AWEDPlayerSettings : NSObject

+ (BOOL)enablePlayerCheckHijack;
+ (BOOL)enableOptimizeStuck;
+ (BOOL)enableVideoModelDescBS;
+ (BOOL)hdrAutomaticIdentification;
+ (BOOL)forbidRestHasPreparedToPlayWhenStop;
+ (BOOL)optimizeLoopPlay;
+ (BOOL)optimzeReachEndPlayTime;
+ (BOOL)checkShouldLoopPlayWithPlayTime;
+ (double)loopPlayStartGapTime;
+ (BOOL)optimizeScalingMode;
+ (BOOL)optimizeVCBackColor;
+ (BOOL)shouldUseSimplayer;
+ (BOOL)enableSimplayerTracker;

@end
