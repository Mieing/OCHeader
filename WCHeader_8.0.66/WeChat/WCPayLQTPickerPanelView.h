@class NSArray, NSString, TimeSpan, UIView, UIPickerView;
@protocol WCPayLQTPickerPanelViewDelegate;

@interface WCPayLQTPickerPanelView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (weak, nonatomic) id<WCPayLQTPickerPanelViewDelegate> delegate;
@property (retain, nonatomic) NSArray *timeList;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) TimeSpan *selectedTime;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIPickerView *timePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initPickerPanelViewWithDelegate:(id)a0 title:(id)a1 subTitle:(id)a2 timeList:(id)a3 selectedTime:(id)a4;
- (void)setupContentView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)cancelBtnPress;
- (void)handleTap;
- (void)confirmBtnClick;
- (void)refreshSelectedTime:(id)a0;
- (void)showInView:(id)a0;
- (void)dismiss;
- (id)timeStringFromTimeSpan:(unsigned int)a0;
- (long long)calcSelectedTimeIndex;
- (void).cxx_destruct;

@end
