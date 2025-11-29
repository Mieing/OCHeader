@class NSMutableDictionary, NSDictionary, NSCalendar, NSDate;

@interface MJDatePickerViewModel : NSObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDictionary *components;
@property (retain, nonatomic) NSDictionary *dataSource;
@property (retain, nonatomic) NSMutableDictionary *selectedDatas;
@property (nonatomic) unsigned long long calendarUnit;
@property (retain, nonatomic) NSCalendar *calendar;

+ (id)descriptionForCalendarUnit:(unsigned long long)a0;

- (id)initWithDate:(id)a0 calendarUnit:(unsigned long long)a1;
- (void)setupData;
- (long long)daysInThisYear:(long long)a0 withMonth:(long long)a1;
- (long long)numberOfComponents;
- (long long)numberOfRowsInComponent:(long long)a0;
- (id)titleForRow:(long long)a0 forComponent:(long long)a1;
- (void)selectRow:(long long)a0 inComponnet:(long long)a1 reloadIfNeeded:(id /* block */)a2;
- (id)selectedDate;
- (id)selectedIndexs;
- (void).cxx_destruct;

@end
