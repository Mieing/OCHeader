@class NSString, WCBizPickerView, NSMutableDictionary, UILabel, NSArray, WCPayBindCardInfo;
@protocol WCPayBindedCardPikerItemDelegate;

@interface WCPayBindedCardPikerItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate> {
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    WCPayBindCardInfo *m_selectCard;
    NSMutableDictionary *m_dicAll;
    NSArray *m_arrRows;
    id<WCPayBindedCardPikerItemDelegate> m_cardDelegate;
    NSArray *m_arrOrderAvailableCards;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)getValue;
- (unsigned int)findIndexFromInfo:(id)a0;
- (void)becomeFirstResponder;
- (void)setSelectBindCard:(id)a0;
- (void)setText:(id)a0;
- (void)setBindCardList:(id)a0;
- (void)setOrderAvailableCardList:(id)a0;
- (BOOL)isOrderAvailableCard:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)checkCardAvailable:(id)a0;
- (BOOL)checkOrderCardAvailable:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)a0;
- (void).cxx_destruct;

@end
