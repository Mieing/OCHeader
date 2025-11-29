@class UIButton, UIPickerView, NSString;
@protocol WCPayLQTPickerViewDelegate;

@interface WCPayLQTPickerView : WCPayNavigationView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain) UIPickerView *pickerView;
@property long long startDate;
@property long long endDate;
@property long long nowDate;
@property (retain) UIButton *button;
@property (weak) id<WCPayLQTPickerViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStartDate:(long long)a0 endDate:(long long)a1 nowDate:(long long)a2;
- (void)layoutSubviews;
- (void)updateView;
- (void)updatePickerView;
- (void)updateButton;
- (id)cancelButtonViewWithPushDirection:(unsigned long long)a0;
- (void)onTapClose;
- (void)onTapButton;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (id)getValue;
- (void).cxx_destruct;

@end
