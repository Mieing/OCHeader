@class WCPayCardBinInfo, NSArray, NSString, MMUIViewController, UILabel, NSMutableArray, WCBizPickerView;

@interface WCPayFillCardInfoSelectCardTypeItem : WCBaseInfoItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate> {
    UILabel *m_cardTypeLabel;
    MMUIViewController *m_currentViewController;
    WCBizPickerView *m_pickerView;
}

@property (retain, nonatomic) WCPayCardBinInfo *m_selectCardTypeInfo;
@property (retain, nonatomic) NSArray *m_allCardTypeList;
@property (retain, nonatomic) NSMutableArray *m_selectCardTypeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)dealloc;
- (void)setCardTypeList:(id)a0;
- (void)setCurrentViewController:(id)a0;
- (void)setSelectCardType:(id)a0;
- (void)becomeFirstResponder;
- (id)cardTypeString;
- (void)setSelectBankItem:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)a0;
- (id)getValue;
- (void).cxx_destruct;

@end
