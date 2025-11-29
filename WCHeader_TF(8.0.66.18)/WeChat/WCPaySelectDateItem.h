@class TenpaySecureCtrl, NSString, WCPaySelectDateItemData, WCPayNavigationView, UILabel, UIPickerView, UIButton;

@interface WCPaySelectDateItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *m_pickerView;
    long long m_iStartYear;
    long long m_iBeginYear;
    long long m_iEndYear;
    NSString *m_value;
    TenpaySecureCtrl *m_secureCtrlItem;
}

@property long long startMonth;
@property long long startDay;
@property long long endMonth;
@property long long endDay;
@property (retain) UILabel *label;
@property (retain) WCPayNavigationView *backgroundView;
@property (retain) WCPayNavigationView *contentView;
@property (retain) UIButton *cancelButton;
@property (retain) UIButton *confirmButton;
@property (retain) UILabel *pickerTitleView;
@property (retain) NSString *title;
@property (retain) WCPaySelectDateItemData *currentSelectedData;
@property BOOL canBeLongTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)yearOfDate:(id)a0;
+ (long long)monthOfDate:(id)a0;
+ (long long)dayOfDate:(id)a0;
+ (id)dateFromData:(id)a0;
+ (id)dataFromDate:(id)a0;

- (id)init;
- (void)updateTips:(id)a0;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
- (void)setStartDate:(id)a0;
- (void)setEndDate:(id)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)updateLabel;
- (void)updateBackgroudView;
- (void)onTapBackgroundView;
- (void)updateContentView;
- (void)updateCancelButton;
- (void)updatePickerTitleView;
- (void)updateConfirmButton;
- (void)onClickCancel;
- (void)onClickConfirm;
- (void)updatePickerView;
- (void)onTapLabel;
- (long long)selectedYearRow;
- (long long)selectedMonthRow;
- (long long)selectedDayRow;
- (long long)yearCount;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (long long)daysOfMonth:(long long)a0 inYear:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (BOOL)isLeapYear:(long long)a0;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (long long)firstYearRow;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)UIPickerViewDidCancel;
- (long long)selectedYear;
- (void)UIPickerViewDidFinish;
- (void)setOrignData:(id)a0;
- (void)setOrignData:(id)a0 labelColor:(id)a1;
- (id)getOriginData;
- (id)getPickerData;
- (void)setStartYear:(long long)a0 endYear:(long long)a1 beginYear:(long long)a2;
- (id)startDate;
- (id)endDate;
- (id)startData;
- (id)endData;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void).cxx_destruct;

@end
