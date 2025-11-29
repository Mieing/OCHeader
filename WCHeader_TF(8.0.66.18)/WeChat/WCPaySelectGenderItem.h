@class NSString, MMPanelView, UILabel, UIPickerView;

@interface WCPaySelectGenderItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain) UILabel *label;
@property (retain) MMPanelView *panelView;
@property (retain) UIPickerView *pickerView;
@property unsigned long long currentGender;
@property (nonatomic) double contentMaxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
- (void)updateContentMaxWidth:(double)a0;
- (unsigned long long)currentSelectGender;
- (void)updateCurrentGender:(unsigned long long)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
