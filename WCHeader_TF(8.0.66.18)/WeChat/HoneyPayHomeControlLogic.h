@class NSString, HoneyPayHomeViewController, WCPayHoneyPayListCgi;
@protocol HoneyPayHomeControlLogicDelegate;

@interface HoneyPayHomeControlLogic : WCPayHoneyPayBaseControlLogic <HoneyPayHomeViewControllerDelegate, WCPayHoneyPayListCgiDelegate, HoneyPayCreateControlLogicDelegate, HoneyPayPayerDetailControlLogicDelegate>

@property (retain, nonatomic) WCPayHoneyPayListCgi *listCgi;
@property (retain, nonatomic) HoneyPayHomeViewController *homeVC;
@property (nonatomic) BOOL createCardSuccess;
@property (weak, nonatomic) id<HoneyPayHomeControlLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)stopLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)WCPayViewControllerDidBeRemoved:(id)a0;
- (void)refreshList;
- (void)createControlLogicDidCreateSuccess:(id)a0;
- (void)payerDetailControlLogicDidUnbindCard:(id)a0;
- (void)payerDetailControlLogicDidModifyMaximumAmount:(id)a0;
- (void)payerDetailControlLogicDidRemoveDetailVC:(id)a0;
- (void)honeyPayVC:(id)a0 didClickRecord:(id)a1;
- (void)honeyPayVCDidClickAddCard:(id)a0;
- (void)honeyPayListCgi:(id)a0 didGetResponse:(id)a1;
- (void)honeyPayListCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
