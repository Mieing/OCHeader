@class UITableViewCell, MMWebImageView, NSString, MMUIViewController, WCPayT2BCGetBankListCgi, WCPaySelectBankViewController, UILabel, WCPayTransBankItem;
@protocol WCPaySelectBankItemDelegate;

@interface WCPaySelectBankItem : WCBaseInfoItem <WCPaySelectBankViewControllerDelegate, WCPayT2BCGetBankListCgiDelegate> {
    MMUIViewController *m_currentViewController;
    WCPayTransBankItem *m_value;
    MMWebImageView *m_bankIconView;
    UILabel *m_bankLabel;
}

@property (retain, nonatomic) WCPayT2BCGetBankListCgi *m_getBankListCgi;
@property (retain, nonatomic) WCPaySelectBankViewController *m_selectBankViewController;
@property (weak, nonatomic) UITableViewCell *fatherCell;
@property (weak, nonatomic) id<WCPaySelectBankItemDelegate> m_selectBankItemDelegate;
@property (nonatomic) BOOL m_isUnselectable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (void)setCurrentViewController:(id)a0;
- (id)getValue;
- (void)clearItem;
- (void)becomeFirstResponder;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)a0;
- (void)setBankItem:(id)a0;
- (id)bankString;
- (id)getBankIconImageView;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnGetBankListOK:(id)a0 allBankList:(id)a1;
- (void).cxx_destruct;

@end
