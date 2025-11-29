@interface AWESearchDateTimeFormatter : NSObject

+ (id)formattedDateForTimestamp:(double)a0;
+ (id)dateFormatterWithYearForSearch;
+ (long long)dateFormatOption;
+ (id)formattedDateForTimeStampWithOption:(long long)a0 timestamp:(double)a1;
+ (id)formattedDateForOption1WithTimestamp:(double)a0 diff:(double)a1;
+ (id)formattedDateForOption2WithTimestamp:(double)a0 diff:(double)a1;
+ (id)formattedDateForOption3WithTimestamp:(double)a0 diff:(double)a1;
+ (id)getTodayStartDate;
+ (id)formattedDateForTodayWithDiff:(double)a0;
+ (id)formattedDateForDaysAgoWithDays:(long long)a0;
+ (id)timeFormatter;

@end
