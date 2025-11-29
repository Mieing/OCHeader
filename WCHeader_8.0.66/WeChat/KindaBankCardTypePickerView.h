@class NSString, WCBizPickerView, NSArray, MMKBankCardTypePickerViewOnSelectCallback, MMBankCardType, MMKViewOnClickCallback, NSMutableDictionary, NSMutableArray, WCUITextField;

@interface KindaBankCardTypePickerView : KindaView <MMKBankCardTypePickerView, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate, UITextFieldDelegate> {
    WCBizPickerView *m_pickerView;
    WCUITextField *m_textField;
    NSArray *m_bankCardTypeArray;
    MMBankCardType *m_selectedBankType;
    MMKBankCardTypePickerViewOnSelectCallback *m_onSelectCallback;
    MMKViewOnClickCallback *m_onClickCallback;
    NSMutableArray *m_arrBankName;
    NSMutableDictionary *m_dicRows;
    long long m_iCurrentSectoin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setBankCardType:(id)a0;
- (void)setSelectedBankCardType:(id)a0;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setValue:(id)a0;
- (id)getValue;
- (void)setOnSelectCallback:(id)a0;
- (void)setOnClickCallback:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)getStringFrom:(id)a0;
- (id)getView;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)WCBizPickerViewDidComplete:(id)a0;
- (void).cxx_destruct;

@end
