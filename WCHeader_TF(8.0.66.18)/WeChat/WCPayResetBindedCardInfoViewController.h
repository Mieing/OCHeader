@class NSString, WCPayCVVItem, WCBaseKeyboardToolBar, WCPayValidDateItem, UIButton;
@protocol WCPayResetBindedCardInfoViewControllerDelegate;

@interface WCPayResetBindedCardInfoViewController : WCPayBaseViewController <ILinkEventExt> {
    BOOL m_bCVV;
    BOOL m_bValidDate;
    UIButton *m_footerButton;
    WCPayCVVItem *m_textFieldCVVItem;
    WCPayValidDateItem *m_pikerValidDateItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id<WCPayResetBindedCardInfoViewControllerDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNext;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)setItemWithCVV:(BOOL)a0 ValidDate:(BOOL)a1;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)a0;
- (void)showDetailTip;
- (void)onPhoneClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void)WCBaseInfoItemBeginEdit:(id)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void).cxx_destruct;

@end
