@class NSString, MMUIViewController, UIPickerView, UIButton;

@interface WCPayValidDateItem : WCBaseTextFieldItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView *m_pickerView;
    int m_iStartYear;
    NSString *m_value;
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (id)getValue;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)addTipBtnTarget:(id)a0 sel:(SEL)a1;
- (void)setViewController:(id)a0;
- (void)showValidTip;
- (void)setTipBtnShowed:(BOOL)a0;
- (void)setTipContent:(id)a0 Title:(id)a1;
- (void).cxx_destruct;

@end
