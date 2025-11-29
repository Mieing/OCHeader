@class TenpaySecureCtrl, NSString, MMPanelView, WCPaySelectDateItemData, UILabel, UIPickerView;

@interface WCPaySelectDateItemV2 : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *m_pickerView;
    long long m_iStartYear;
    long long m_iEndYear;
    NSString *m_value;
    TenpaySecureCtrl *m_secureCtrlItem;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMPanelView *panelView;
@property (nonatomic) long long startMonth;
@property (nonatomic) long long startDay;
@property (nonatomic) long long endMonth;
@property (nonatomic) long long endDay;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double contentMaxWidth;
@property (retain, nonatomic) WCPaySelectDateItemData *currentSelectedData;
@property (nonatomic) BOOL canBeLongTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)yearOfDate:(id)a0;
+ (long long)monthOfDate:(id)a0;
+ (long long)dayOfDate:(id)a0;
+ (id)dateFromData:(id)a0;
+ (id)dataFromDate:(id)a0;

- (void)dealloc;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)updateTips:(id)a0;
- (id)getValue;
- (void)updateContentMaxWidth:(double)a0;
- (void)setStartDate:(id)a0;
- (void)setEndDate:(id)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (long long)selectedYearRow;
- (long long)selectedMonthRow;
- (long long)selectedDayRow;
- (long long)yearCount;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (long long)daysOfMonth:(long long)a0 inYear:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)reloadPickerViewContentAfterSelectYear;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (BOOL)isLeapYear:(long long)a0;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (long long)firstYearRow;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)monthWordingInEngligh:(long long)a0;
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
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
