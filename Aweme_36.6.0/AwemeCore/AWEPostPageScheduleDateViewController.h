@class NSDate, NSCalendar, UIView, DUXBaseLabel, NSArray, AWEPostPageScheduleData, NSDictionary, DUXPicker, NSString, NSTimeZone, DUXBaseButton, NSDateFormatter;

@interface AWEPostPageScheduleDateViewController : AWEPublishHalfScreenContentViewController <DUXPickerDelegate>

@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseButton *cancelButton;
@property (retain, nonatomic) DUXBaseButton *doneButton;
@property (retain, nonatomic) DUXPicker *datePicker;
@property (retain, nonatomic) DUXBaseLabel *tipLabel;
@property (retain, nonatomic) DUXBaseButton *clearButton;
@property (nonatomic) double bottomPadding;
@property (nonatomic) BOOL pickerAnimated;
@property (nonatomic) BOOL showClearButton;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSArray *scheduleDatas;
@property (nonatomic) long long selectedHour;
@property (nonatomic) long long selectedMinute;
@property (retain, nonatomic) AWEPostPageScheduleData *selectedScheduleData;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDate *limitMinDate;
@property (retain, nonatomic) NSDate *limitMaxDate;
@property (copy, nonatomic) NSDictionary *commonTrackParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShow;
- (long long)componentCountInDUXPicker:(id)a0;
- (long long)duxPicker:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)duxPicker:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (void)cancelButtonDidTap:(id)a0;
- (void)setupDatasWithBeginDate:(id)a0 endDate:(id)a1;
- (void)setupDatePickerSelectionWithDate:(id)a0;
- (id)scheduleDataWithDate:(id)a0;
- (void)updateScheduleSelectionWithHour:(long long)a0 minute:(long long)a1;
- (void)trackClickWithArea:(id)a0;
- (BOOL)isDateInRange:(id)a0;
- (BOOL)isDateExpiration:(id)a0;
- (void)resetPickerWithCurrentDate;
- (void)enablePickerAnimation:(id /* block */)a0;
- (void)doneButtonDidTap:(id)a0;
- (void)pickerDidChangeSelectedRowForComponent:(long long)a0 row:(long long)a1;
- (void)clearButtonDidTap:(id)a0;
- (id)initWithParameter:(id)a0;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
