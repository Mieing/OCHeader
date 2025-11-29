@interface AWENearbyFrequencyControlUtil : NSObject

+ (long long)currentManuallyRecordCount:(id)a0;
+ (void)manuallyRecordOnceWithKey:(id)a0;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2 recordManually:(BOOL)a3;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:(unsigned long long)a0 timesEvery:(double)a1 secondsWithKey:(id)a2 recordManually:(BOOL)a3;
+ (BOOL)executeUpTo:(unsigned long long)a0 timesEvery:(double)a1 secondsWithKey:(id)a2 andAction:(id /* block */)a3 recordManually:(BOOL)a4;
+ (BOOL)executeUpTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2 andAction:(id /* block */)a3 recordManually:(BOOL)a4;
+ (BOOL)executeEqualTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2 andAction:(id /* block */)a3 recordManually:(BOOL)a4;
+ (BOOL)isAbleToExecuteWithFrequencyEqualTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2 recordManually:(BOOL)a3;
+ (id)__recordKeyWithKey:(id)a0;
+ (BOOL)__isTimeValidForExecuteWithKey:(id)a0 allowedTimes:(unsigned long long)a1 andTimeInterval:(double)a2;
+ (void)__recordCalledOnceWithKey:(id)a0;
+ (BOOL)__isTimeValidForExecuteWithKey:(id)a0 allowedTimes:(unsigned long long)a1 numberOfNaturalDays:(unsigned long long)a2;
+ (BOOL)__isTimeValidForExecuteEquallyWithKey:(id)a0 allowedTimes:(unsigned long long)a1 numberOfNaturalDays:(unsigned long long)a2;
+ (long long)__recordCalledOnceResultWithKey:(id)a0;
+ (double)fqcForever;
+ (BOOL)executeUpTo:(unsigned long long)a0 timesEvery:(double)a1 secondsWithKey:(id)a2 andAction:(id /* block */)a3;
+ (BOOL)executeUpTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2 andAction:(id /* block */)a3;
+ (BOOL)executeUpToOnceEveryNaturalDayWithKey:(id)a0 andAction:(id /* block */)a1;
+ (BOOL)execureEqualTo:(unsigned long long)a0 everyNaturalDayWithKey:(id)a1 andAction:(id /* block */)a2;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:(unsigned long long)a0 timesEvery:(double)a1 secondsWithKey:(id)a2;
+ (BOOL)isAbleToExecuteWithFrequencyUpTo:(unsigned long long)a0 timesEvery:(unsigned long long)a1 naturalDaysWithKey:(id)a2;
+ (long long)manuallyRecordResultWithKey:(id)a0 validNaturalDays:(unsigned long long)a1;
+ (void)resetRecordDataWithKey:(id)a0;

@end
