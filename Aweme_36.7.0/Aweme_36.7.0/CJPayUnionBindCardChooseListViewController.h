@class CJPayUnionBindCardChooseViewModel, CJPayUnionBindCardChooseView, NSString;

@interface CJPayUnionBindCardChooseListViewController : CJPayFullPageBaseViewController <UITableViewDelegate, UITableViewDataSource, CJPayBindCardPageProtocol>

@property (retain, nonatomic) CJPayUnionBindCardChooseView *chooseView;
@property (retain, nonatomic) CJPayUnionBindCardChooseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)p_buttonClick;
- (void)createAssociatedModelWithParams:(id)a0;
- (void)p_showSingleButtonAlertWithResponse:(id)a0;
- (void)p_sendSMS;
- (id)p_buttonInfoActions:(id)a0;
- (id)p_ysfBankList;
- (void)p_initSelectCardsForSync;
- (void)p_syncCard;
- (id)p_selectCardList;
- (void)p_setPwd;
- (void)closeBindCardProcessWithResult:(BOOL)a0 token:(id)a1 completionBlock:(id /* block */)a2;
- (void)p_verifySMS:(id)a0;
- (void)p_cellClickTracker:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)back;

@end
