@interface IESOuterTestFrequencyControl : NSObject

+ (id)infoForKey:(id)a0;
+ (void)storeInfo:(id)a0 forKey:(id)a1;
+ (BOOL)isFirstTimeForKey:(id)a0;
+ (void)recordOnceForKey:(id)a0;
+ (unsigned long long)recordsCountForKey:(id)a0;
+ (void)clearRecordsForKey:(id)a0;
+ (BOOL)isValidRecordInEveryXHours:(unsigned long long)a0 forKey:(id)a1;
+ (BOOL)isValidRecordInEveryXNaturalDays:(unsigned long long)a0 forKey:(id)a1;

@end
