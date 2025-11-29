@class NSString, PasswordLogic, UIView;
@protocol WCAddressListViewControllerDelegate;

@interface WCAddressListViewController : WCAddressBaseViewController <LongPressMenuViewDelegate> {
    id<WCAddressListViewControllerDelegate> m_delegate;
    PasswordLogic *m_passwordLogic;
    unsigned long long m_enWCAddressAddressListScene;
    UIView *m_oLastLongPressView;
    long long addressSelectedForLongPress;
}

@property (weak, nonatomic) id<WCAddressListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addListView;
- (void)refreshListViewWith:(id)a0 selectedAddressId:(unsigned int)a1;
- (void)copyWithAddress:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initNavigationBar;
- (void)reloadAddressList:(unsigned long long)a0;
- (void)onResendConfirm;
- (void)addNew;
- (void)onNext;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (double)navigationAreaHeight;
- (double)getContentViewY;
- (void)viewDidLoad;
- (void)dealloc;
- (void)resetDefautSelect;
- (void)refreshViewWithData:(id)a0;
- (void)selectActionCell:(id)a0;
- (void)selectEditingCell:(id)a0;
- (void)clickCopyButton:(id)a0;
- (void)commitEditingForRowAtIndexPath:(id)a0 Cell:(id)a1;
- (void)onLongPressAddreessCell:(id)a0;
- (void)copyForLongPress;
- (void)deleteForLongPress;
- (BOOL)canBecomeFirstResponder;
- (long long)overrideUserInterfaceStyle;
- (void)registerYReportSdk;
- (BOOL)isEditMode;
- (BOOL)isInHalfPage;
- (void)selectAddress:(id)a0;
- (void).cxx_destruct;

@end
