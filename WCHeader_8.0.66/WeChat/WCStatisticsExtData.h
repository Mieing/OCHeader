@interface WCStatisticsExtData : MMObject

+ (id)convertExtStr2Info:(id)a0;
+ (id)convertExtInfo2Str:(id)a0;
+ (BOOL)isVaildAdWithStatExtStr:(id)a0;
+ (id)mergeStatStrWithOldStatStr:(id)a0 appId:(id)a1;

@end
