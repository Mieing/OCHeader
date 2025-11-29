@class NSString, UIButton, NSMutableArray;
@protocol WCPayTenpayImportCardInfoViewControllerDelegate;

@interface WCPayTenpayImportCardInfoViewController : WCPayBaseViewController <ILinkEventExt, WCActionSheetDelegate> {
    BOOL m_bReadAgreement;
    BOOL m_bSubscribeApp;
    UIButton *m_footerButton;
    NSMutableArray *m_arrayInfoGroup;
    id<WCPayTenpayImportCardInfoViewControllerDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initNavigationBar;
- (id)getHeaderView;
- (void)initInfoTemplate;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)onSubscribeAppBtn:(id)a0;
- (void)onReadAgreement:(id)a0;
- (void)initFooterView;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onNext;
- (void)setDelegate:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void).cxx_destruct;

@end
