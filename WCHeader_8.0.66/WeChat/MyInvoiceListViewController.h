@class NSString, InvoiceFooterView, PasswordLogic, UIView, NSMutableArray, MyInvoiceData;
@protocol MyInvoiceListViewControllerDelegate;

@interface MyInvoiceListViewController : WCBizBaseViewController <PasswordLogicDelegate, LongPressMenuViewDelegate, MyInvoiceInfoViewControllerDelegate, IMyInvoiceLogicMgrExt> {
    PasswordLogic *m_passwordLogic;
    unsigned long long m_enWCAddressAddressListScene;
    UIView *m_oLastLongPressView;
    NSMutableArray *m_invoiceDataArr;
    int m_scene;
    MyInvoiceData *m_selectInvoice;
}

@property (retain, nonatomic) InvoiceFooterView *footerView;
@property (weak, nonatomic) id<MyInvoiceListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initPasswordLogic;
- (void)initNavigationBar;
- (void)MyInvoiceBack;
- (void)onNext;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidBeInteractivePoped;
- (void)dealloc;
- (void)setupWithInvoiceDataArr:(id)a0 fromScene:(int)a1;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)verifyPasswordFail:(id)a0;
- (id)getAddressDetailString:(id)a0;
- (id)getInvoiceCopiedString:(id)a0;
- (double)getCellHeightForInvoice:(id)a0;
- (void)resetDefautSelect;
- (void)refreshViewWithInvoiceDataArr:(id)a0;
- (void)InvoiceAdd;
- (void)makeNewCell:(id)a0 cellInfo:(id)a1;
- (void)makeCell:(id)a0 cellInfo:(id)a1;
- (void)selectActionCell:(id)a0;
- (void)gotoInvoiceDetail:(id)a0;
- (void)commitEditingForRowAtIndexPath:(id)a0 Cell:(id)a1;
- (void)accessoryButtonTappedForRowWithIndexPath:(id)a0 Cell:(id)a1;
- (void)gotoInfoOfInvoice:(id)a0;
- (void)onLongPressMenuViewCopy:(id)a0;
- (void)OnPress:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)MenuControllerWillHide:(id)a0;
- (void)OnAddNewInvoiceData:(id)a0 ofGroupId:(long long)a1;
- (void)OnEditInvoiceData:(id)a0;
- (void)OnDelInvoiceRet:(BOOL)a0 andGroupId:(long long)a1;
- (void).cxx_destruct;

@end
