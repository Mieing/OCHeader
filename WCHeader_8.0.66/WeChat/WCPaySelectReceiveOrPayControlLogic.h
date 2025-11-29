@class NSString, LocationRetriever;

@interface WCPaySelectReceiveOrPayControlLogic : WCPayControlLogic <LocationRetrieveDelegate, WCPayWalletLockVerifyLogicDelegate, IWCPayControlLogicExt> {
    LocationRetriever *locationRetriever;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)startLogic;
- (void)stopLogic;
- (void)OnCancel;
- (void)OnFinishedWCPayLogic:(id)a0 CompleteStatus:(int)a1;
- (void)walletLockVerifySuccess:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void).cxx_destruct;

@end
