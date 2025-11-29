@class WCPayCardBinInfo, NSString, WCBizPickerView, NSMutableDictionary, UILabel, NSMutableArray, NSArray;

@interface WCPayCardTypeItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate> {
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    NSMutableArray *m_arrSection;
    NSMutableDictionary *m_dicRows;
    WCPayCardBinInfo *m_selectType;
    long long m_iCurrentSectoin;
    NSArray *m_arrOrderAvailableCards;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)getStringFrom:(id)a0;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)setText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)setSelectCardType:(id)a0;
- (void)setCardTypeList:(id)a0;
- (void)setOrderAvailableCardList:(id)a0;
- (BOOL)isOrderAvailableCard:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)a0;
- (void).cxx_destruct;

@end
