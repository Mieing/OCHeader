@class UIView, NSCalendar, NSArray, BDPDatePickerPluginModel, UIPickerView, UILabel, UIButton, UIToolbar, NSString, UIBarButtonItem, UIDatePicker;
@protocol BDPDatePickerViewDelegate;

@interface BDPDatePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource, BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPDatePickerPluginModel *model;
@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIDatePicker *picker;
@property (retain, nonatomic) UIPickerView *yearMonthPicker;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic) long long startYear;
@property (nonatomic) long long endYear;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *confirmButtonItem;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<BDPDatePickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)confirmBtnClicked:(id)a0;
- (void)setupItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)cancelBtnClicked:(id)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)updateChildFrame;
- (void)setUpDatePickerConfig;
- (void)setupTimePicker;
- (void)configStyleWithModel:(id)a0;
- (void)setupYearMonthPicker;
- (void)selectDate:(id)a0 animated:(BOOL)a1;
- (double)componentWidthWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)currentDate;
- (void)dealloc;
- (void)showInView:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setupViews;
- (void)updateWithModel:(id)a0;
- (void)panGesture:(id)a0;

@end
