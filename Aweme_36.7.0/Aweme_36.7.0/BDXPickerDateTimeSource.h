@class NSArray, NSCalendar, NSString;

@interface BDXPickerDateTimeSource : BDXPickerSource

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSArray *years;
@property (retain, nonatomic) NSArray *months;
@property (retain) NSString *start;
@property (retain) NSString *end;
@property (retain) NSString *fields;
@property (retain) NSString *value;
@property (retain) NSString *separator;

- (id)stringValueForRow:(long long)a0 forComponent:(long long)a1;
- (id)valuesRow;
- (id)valueDate;
- (id)dateFromStringValue:(id)a0;
- (long long)endMonth;
- (BOOL)isYearAndMonth;
- (void).cxx_destruct;
- (id)endDate;
- (id)init;
- (id)startDate;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;
- (long long)startYear;
- (long long)startMonth;
- (long long)endYear;

@end
