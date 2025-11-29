@class NSString, MMPanelView, UILabel, UIPickerView;

@interface WCPaySelectCountItemV2 : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *m_pickerView;
    long long m_iStartCount;
    long long m_iEndCount;
    NSString *m_value;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMPanelView *panelView;
@property (nonatomic) long long m_count;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double contentMaxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
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
- (void)setStartCount:(long long)a0 endCount:(long long)a1;
- (void)setDefaultCount:(long long)a0;
- (long long)getCount;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void).cxx_destruct;

@end
