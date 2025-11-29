@class DUXPicker, NSDateFormatter, NSTimeZone, NSCalendar, NSDate, NSString;

@interface DUXDatePicker : UIView <DUXPickerDelegate>

@property (retain, nonatomic) DUXPicker *picker;
@property (retain, nonatomic) NSDateFormatter *fmt;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) NSDate *minimumDate;
@property (copy, nonatomic) NSDate *maximumDate;
@property (copy, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSCalendar *calendar;
@property (nonatomic) unsigned long long extraYearsBeforeMinYear;
@property (nonatomic) unsigned long long extraYearsAfterMaxYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (long long)componentCountInDUXPicker:(id)a0;
- (long long)duxPicker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)duxPicker:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)checkCurrentDate;
- (void)reloadComponents;
- (void)updateTimeByTimeZone;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
