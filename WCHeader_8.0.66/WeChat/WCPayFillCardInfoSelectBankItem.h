@class WCPayCardBinInfo, NSString, WCPaySelectBankViewController, MMUIViewController, UILabel, NSMutableArray;

@interface WCPayFillCardInfoSelectBankItem : WCBaseInfoItem <WCPaySelectBankViewControllerDelegate> {
    UILabel *m_bankLabel;
    WCPayCardBinInfo *m_selectedBank;
    MMUIViewController *m_currentViewController;
}

@property (retain, nonatomic) NSMutableArray *m_arrCardTypeList;
@property (retain, nonatomic) WCPaySelectBankViewController *m_selectBankViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)setCardTypeList:(id)a0;
- (void)setSelectCardType:(id)a0;
- (void)setCurrentViewController:(id)a0;
- (void)becomeFirstResponder;
- (BOOL)containsBankType:(id)a0;
- (id)getValue;
- (id)bankString;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)a0;
- (void).cxx_destruct;

@end
