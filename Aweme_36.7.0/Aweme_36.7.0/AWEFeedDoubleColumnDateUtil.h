@interface AWEFeedDoubleColumnDateUtil : NSObject

+ (id)localDate:(id)a0;
+ (BOOL)isTimestamp:(double)a0 withinDays:(long long)a1 ofTimestamp:(double)a2;
+ (id)isDateInPastDays:(id)a0 days:(long long)a1 now:(id)a2 isRecordNow:(BOOL)a3;
+ (BOOL)checkUserActivityWithTimestamps:(id)a0 lastXDays:(long long)a1 requiredYDays:(long long)a2;

@end
