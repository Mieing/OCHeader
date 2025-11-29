@class NSDateFormatter, NSCalendar, NSArray, NSDateComponents, NSDate, NSString;

@interface WCFinderLimitDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>

@property (retain, nonatomic) NSDateComponents *minimumComponents;
@property (retain, nonatomic) NSDateComponents *maximumComponents;
@property (retain, nonatomic) NSDateComponents *currentComponents;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSArray *yearList;
@property (retain, nonatomic) NSArray *monthList;
@property (retain, nonatomic) NSArray *dayList;
@property (retain, nonatomic) NSDate *currentDate;
@property (copy, nonatomic) NSString *yearString;
@property (copy, nonatomic) NSString *monthString;
@property (copy, nonatomic) NSString *dayString;
@property (retain, nonatomic) NSDate *minDate;
@property (retain, nonatomic) NSDate *maxDate;
@property (retain, nonatomic) NSDate *selectDate;
@property (nonatomic) long long componentsNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAddSubview:(id)a0;
- (long long)daysWithMonthInThisYear:(long long)a0 withMonth:(long long)a1;
- (long long)monthsInThisYear:(long long)a0;
- (void)showDefaultWithCurr;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)titleForRow:(long long)a0 forComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)selectedDate;
- (void).cxx_destruct;

@end
