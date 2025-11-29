@class NSString, PKAddPaymentPassViewController;

@interface WAJSEventHandler_openNFCCard : WAJSEventHandler_BaseEvent <PKAddPaymentPassViewControllerDelegate, WCPayIssueNFCCardCgiDelegate, WCPayNFCCardApplyControlLogicDelegate, WCPayNFCCardChargeControlLogicDelegate>

@property (retain, nonatomic) PKAddPaymentPassViewController *addPaymentPassViewController;
@property (retain, nonatomic) NSString *outOrderNo;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned long long actType;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onWCPayNFCCardApplyControlLogicSuccess:(id)a0;
- (id)genRetDict;
- (void)onWCPayNFCCardApplyControlLogicCancel;
- (void)onWCPayNFCCardApplyControlLogicFailed:(id)a0;
- (void)onWCPayNFCCardChargeControlLogicSuccess;
- (void)onWCPayNFCCardChargeControlLogicCancel;
- (void)onWCPayNFCCardChargeControlLogicFailed:(id)a0;
- (void)showErrorAlertView:(id)a0;
- (void)onFailReturn;
- (void).cxx_destruct;

@end
