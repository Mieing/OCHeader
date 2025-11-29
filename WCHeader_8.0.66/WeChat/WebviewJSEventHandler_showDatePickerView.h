@class UIPickerView, NSString, UIView, JSEvent, MMPageSheetAdapter, UIToolbar, NSMutableArray, WADateTimePickerView;

@interface WebviewJSEventHandler_showDatePickerView : WebviewJSEventHandlerBase <WADateTimePickerDelegate, MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, IUiUtilExt> {
    struct MMDates { long long year; long long month; long long day; } m_minDate;
    struct MMDates { long long year; long long month; long long day; } m_maxDate;
    struct MMDates { long long year; long long month; long long day; } m_currentDate;
    struct MMDates { long long year; long long month; long long day; } m_selectedDate;
    long long componentsOfPickerView;
    JSEvent *_jsEvent;
}

@property (retain, nonatomic) WADateTimePickerView *datePicker;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (retain, nonatomic) NSMutableArray *m_yearData;
@property (retain, nonatomic) NSMutableArray *m_monthData;
@property (retain, nonatomic) NSMutableArray *m_dayData;
@property (retain, nonatomic) UIToolbar *m_toolBar;
@property (retain, nonatomic) UIPickerView *m_pickerView;
@property (retain, nonatomic) UIView *m_blackView;
@property (retain, nonatomic) UIView *m_containView;
@property (retain, nonatomic) UIView *m_blackLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)initData:(id)a0;
- (void)initDate;
- (void)jumpToCurrentDate:(BOOL)a0;
- (long long)checkValidOfDay:(long long)a0 AndMonth:(long long)a1 AndDay:(long long)a2;
- (id)printDate:(struct MMDates { long long x0; long long x1; long long x2; })a0;
- (void)disableSwipePop;
- (void)enableSwipePop;
- (void)initDatePickerView;
- (void)accessibilityFocusPickerView;
- (void)onMainWindowFrameChanged;
- (void)reloadDatePickerView;
- (void)doneBtnClicked;
- (void)cancelBtnClicked;
- (void)resignPickerView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)showNewDatePickerWithParamDict:(id)a0;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)onCancel;
- (void)onDateTimeConfirm:(id)a0;
- (void).cxx_destruct;

@end
