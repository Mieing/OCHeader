@interface FTSTopHitDynamicUtil : NSObject

+ (unsigned int)GetTopHitItemSurvivalDays;
+ (unsigned int)GetLeastDisplayScore;
+ (unsigned int)GetMaxDivScore;
+ (unsigned int)CalRaiseScore:(unsigned int)a0;
+ (unsigned int)CalDeclineScore:(unsigned int)a0;
+ (unsigned int)CalDeclineScoreForMMGroup:(unsigned int)a0;
+ (BOOL)isSupportTopHitRemoval;
+ (void)PrintLogs;
+ (int)ParseScoreInterval:(unsigned int)a0;

@end
