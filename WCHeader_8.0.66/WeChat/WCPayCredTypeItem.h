@class WCPayCredInfo, NSString, MMPanelView, UILabel, UIPickerView, NSMutableArray;

@interface WCPayCredTypeItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate> {
    UILabel *m_textLabel;
    NSMutableArray *m_arrSection;
    WCPayCredInfo *m_selectType;
    long long m_iCurrentSectoin;
}

@property double contentMaxWidth;
@property (retain) MMPanelView *panelView;
@property (retain) UIPickerView *pickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateContentMaxWidth:(double)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)updateLabel;
- (void)onTapLabel;
- (void)beforeShowPicker;
- (id)getStringFrom:(id)a0;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)getValue;
- (void)setText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setSelectCredType:(id)a0;
- (void)setCredTypeList:(id)a0;
- (void)setEnable:(BOOL)a0;
- (void)setTitleFont:(id)a0;
- (void)updateTitleColor:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (id)currentAccessibilityDesc;
- (void).cxx_destruct;

@end
