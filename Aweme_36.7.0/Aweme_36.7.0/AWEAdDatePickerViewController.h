@class NSDateFormatter, NSString, AWEDatePickerTopBar, UIDatePicker, NSDate;

@interface AWEAdDatePickerViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEDatePickerTopBar *topBar;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) id /* block */ didFinishPicking;
@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)stringFromDate:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)dateFromString:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)datePickerValueChanged:(id)a0;
- (void)doneButtonAction:(id)a0;

@end
