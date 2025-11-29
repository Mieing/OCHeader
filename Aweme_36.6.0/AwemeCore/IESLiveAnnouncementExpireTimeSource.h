@class NSArray, NSDictionary, NSDate, NSNumber;

@interface IESLiveAnnouncementExpireTimeSource : IESLivePickerSource

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDictionary *availableDates;
@property (retain, nonatomic) NSArray *years;
@property (retain, nonatomic) NSArray *monthsForSelectedYear;
@property (retain, nonatomic) NSArray *daysForSelectedMonth;
@property (nonatomic) long long yearIndex;
@property (retain, nonatomic) NSNumber *selectedYear;
@property (nonatomic) long long monthIndex;
@property (retain, nonatomic) NSNumber *selectedMonth;
@property (nonatomic) long long dayIndex;
@property (retain, nonatomic) NSNumber *selectedDay;

- (void)setupSelectedDate:(id)a0;
- (void)updateSelectedMonthIndex:(long long)a0;
- (void)updateSelectedDayIndex:(long long)a0;
- (id)initWithSelectedDate:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (void)updateSelectedYearIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;
- (void)setupData;

@end
