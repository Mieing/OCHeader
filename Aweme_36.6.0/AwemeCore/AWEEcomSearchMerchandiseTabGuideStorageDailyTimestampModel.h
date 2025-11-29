@class NSDictionary, NSDateFormatter, NSCalendar;

@interface AWEEcomSearchMerchandiseTabGuideStorageDailyTimestampModel : AWEBaseApiModel

@property (retain, nonatomic) NSDateFormatter *dayFormatter;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDictionary *dayGroups;

+ (id)JSONKeyPathsByPropertyKey;

- (void)resetDayGroups;
- (void)cleanExpiredGroupsWithCycleDayNum:(long long)a0;
- (long long)timestampCountOfDayGroups;
- (id)dayKeyFromTimestamp:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addTimestamp:(double)a0;

@end
