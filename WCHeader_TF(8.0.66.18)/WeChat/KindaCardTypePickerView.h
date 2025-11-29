@class WCUITextField, NSString, WCBizPickerView, NSArray, MMKViewOnClickCallback, MMKCardTypePickerViewOnSelectCallback;

@interface KindaCardTypePickerView : KindaView <MMKCardTypePickerView, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate, UITextFieldDelegate> {
    WCBizPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSArray *m_options;
    MMKCardTypePickerViewOnSelectCallback *m_callback;
    MMKViewOnClickCallback *m_onClickCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setEnabled:(BOOL)a0;
- (BOOL)getEnabled;
- (void)setTextSize:(float)a0;
- (void)setHint:(id)a0;
- (id)getView;
- (void)setOnClickCallback:(id)a0;
- (void)setOptions:(id)a0;
- (void)setOnSelectCallback:(id)a0;
- (void)select:(int)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)WCBizPickerViewDidComplete:(id)a0;
- (void).cxx_destruct;

@end
