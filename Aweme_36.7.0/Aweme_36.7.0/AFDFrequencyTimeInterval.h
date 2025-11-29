@interface AFDFrequencyTimeInterval : NSObject <NSCopying>

@property (nonatomic) double seconds;
@property (nonatomic) BOOL usingCalendar;
@property (nonatomic) unsigned long long calendarUnit;
@property (nonatomic) long long calendarValue;

+ (id)intervalWithCalendarDays:(long long)a0;
+ (id)intervalWithDays:(double)a0;
+ (id)intervalWithSeconds:(double)a0;
+ (id)intervalWithCalendarUnit:(unsigned long long)a0 value:(long long)a1;

- (BOOL)isDate:(id)a0 inSameIntervalWithDate:(id)a1;
- (BOOL)isForever;
- (id)dateBySubtractingIntervalFromDate:(id)a0;
- (id)dateByAddingIntervalToDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
