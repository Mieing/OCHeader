@interface AWEDateTimeFormatter : NSObject

+ (id)formattedDateForTimestampForNotice:(double)a0;
+ (id)formattedDateForTimestamp:(double)a0;
+ (id)formattedDateForRelatedRecommendTimestamp:(double)a0;
+ (id)formattedDateForInsStyleTimestamp:(double)a0;
+ (id)formattedDateForSearchTimestamp:(double)a0;
+ (id)dateFormatterWithoutYearForInsTime;
+ (id)dateFormatterWithYearForInsTime;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithYear;
+ (id)commonTimeFormatter;
+ (id)_getWeekStringFromWeek:(long long)a0;
+ (id)dateFormatterForT;
+ (id)dateFormatterWithYearForSearch;
+ (id)dateFormatterWithoutYearForDiscoverDRelateHotSpot;
+ (id)dateFormatterWithYearForDiscoverDRelateHotSpot;
+ (id)dateFormatterWithoutYearForRelatedRecommend;
+ (id)dateFormatterWithYearForRelatedRecommend;
+ (id)formattedDateForTSingleFeedTimestamp:(double)a0;
+ (id)formattedDateForDiscoverDRelatedHotSpotTimestamp:(double)a0;
+ (id)formattedDateForSearchNewStyleTimestamp:(double)a0;
+ (id)timeFormatter;

@end
