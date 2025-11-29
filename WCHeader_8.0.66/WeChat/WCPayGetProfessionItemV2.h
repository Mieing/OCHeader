@class NSString, MMPanelView, NSArray, UILabel, UIPickerView, WCPayProfession;

@interface WCPayGetProfessionItemV2 : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMPanelView *panelView;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double contentMaxWidth;
@property (retain, nonatomic) WCPayProfession *profession;
@property (retain, nonatomic) NSArray *professions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
- (void)updateProfession:(id)a0;
- (void)updateContentMaxWidth:(double)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)UIPickerViewDidFinish;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
