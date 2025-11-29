@class WCUITextField, NSString, MMKValidDatePickerViewOnSelectCallback, UIView, UIPickerView, UIButton;

@interface KindaValidDatePickerView : KindaView <MMKValidDatePickerView, UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate> {
    UIPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSString *validDate;
    MMKValidDatePickerViewOnSelectCallback *m_callback;
    int m_iStartYear;
}

@property (retain, nonatomic) UIView *m_textFieldInputView;
@property (retain, nonatomic) UIView *m_contentView;
@property (retain, nonatomic) UIButton *m_cancelButton;
@property (retain, nonatomic) UIButton *m_confirmButton;
@property (retain, nonatomic) UIView *m_backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)keyboardFrameChange:(id)a0;
- (void)setFocus:(BOOL)a0;
- (void)accessibilityFocusPickerView;
- (BOOL)getFocus;
- (id)getView;
- (void)setOnSelectCallback:(id)a0;
- (id)getText;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void).cxx_destruct;

@end
