@class WCPaySelectBankViewController, NSString, WCPayT2BCGetBankListCgi;

@interface LiteAppJsApiSelectBank : LiteAppJsApi <WCPaySelectBankViewControllerDelegate, WCPayT2BCGetBankListCgiDelegate>

@property (weak, nonatomic) WCPaySelectBankViewController *selectBankVC;
@property (retain, nonatomic) WCPayT2BCGetBankListCgi *getBankListCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)a0;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnGetBankListOK:(id)a0 allBankList:(id)a1;
- (void)OnGetBankListWithError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
