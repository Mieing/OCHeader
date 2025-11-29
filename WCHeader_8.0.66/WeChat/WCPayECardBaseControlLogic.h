@class WCPayECardCgiError, NSString;

@interface WCPayECardBaseControlLogic : WCPayControlLogic <MMTipsViewControllerDelegate>

@property (retain, nonatomic) WCPayECardCgiError *baseECardCgiError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)showAlertWith:(id)a0;
- (void)handleECardCgiError:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void).cxx_destruct;

@end
