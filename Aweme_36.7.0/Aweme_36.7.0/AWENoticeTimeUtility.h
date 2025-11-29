@interface AWENoticeTimeUtility : NSObject

+ (id)converTimeStampToTextForMessage:(double)a0;
+ (id)convertTimeStampToShorterTextForMessage:(double)a0 withRecentSeconds:(long long)a1;
+ (id)formattedDateForTimestampForNotice:(double)a0;
+ (id)getWeekStringFromWeek:(long long)a0;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithYear;
+ (id)commonTimeFormatter;
+ (id)_getWeekStringFromWeek:(long long)a0;
+ (id)dateFormatterForD;
+ (id)timeLabelAccessibilityLabel:(double)a0;
+ (id)timeFormatter;

@end
