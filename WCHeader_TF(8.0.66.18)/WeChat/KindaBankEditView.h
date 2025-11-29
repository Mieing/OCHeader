@class NSMutableArray, NSString, WCPaySelectBankViewController, UITextField, MMKBankEditViewOnSeletBankCallback, MMDynamicColor, WCPaySingleSelectTableViewController;

@interface KindaBankEditView : KindaView <WCPaySelectBankViewControllerDelegate, UITextFieldDelegate, WCPaySingleSelectedTableViewControllerDelegate, MMKBankEditView> {
    WCPaySelectBankViewController *m_selectBankVC;
    UITextField *m_view;
    NSMutableArray *m_major_bank_list;
    NSMutableArray *m_bank_list;
    MMKBankEditViewOnSeletBankCallback *m_callback;
    NSMutableArray *m_bank_type_list;
}

@property (nonatomic) long long fontStyle;
@property (retain, nonatomic) MMDynamicColor *dynamicColor;
@property (nonatomic) float fontSize;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankCardType;
@property (retain, nonatomic) WCPaySingleSelectTableViewController *singleSelectViewController;
@property (retain, nonatomic) NSMutableArray *currentBankCardTypeList;
@property (retain, nonatomic) NSMutableArray *currentBankCardTypeDisplayList;
@property (retain, nonatomic) NSString *tmpBankName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (id)bankListFromKindaData:(id)a0;
- (void)setData:(id)a0;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setSelected:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)openBankSelectView;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)a0;
- (BOOL)needPushSelectCardTypeViewController;
- (void)onSingleSelectWithIndexPath:(id)a0;
- (void)setOnSeletBankCallback:(id)a0;
- (void)setTextColor:(id)a0;
- (id)getTextColor;
- (long long)getFontStyle;
- (void)setTextSize:(float)a0;
- (float)getTextSize;
- (id)getSelectedBankType;
- (BOOL)getSupportDynamicSize;
- (void).cxx_destruct;

@end
