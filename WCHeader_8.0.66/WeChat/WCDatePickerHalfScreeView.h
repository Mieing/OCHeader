@class UIDatePicker, NSDate;

@interface WCDatePickerHalfScreeView : MMPageSheetBaseView

@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *selectedDate;
@property (retain, nonatomic) UIDatePicker *curDatePicker;

- (id)initWithTitle:(id)a0 minTime:(id)a1 maxTime:(id)a2 selectTime:(id)a3;
- (id)navigationRightButton;
- (void)setupDetailView;
- (void)onDone;
- (void).cxx_destruct;

@end
