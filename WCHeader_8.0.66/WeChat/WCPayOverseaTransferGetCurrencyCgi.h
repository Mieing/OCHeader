@class WCPayOverseaBaseCgi, NSString;
@protocol WCPayOverseaTransferGetCurrencyCgiDelegate;

@interface WCPayOverseaTransferGetCurrencyCgi : NSObject <WCPayOverseaBaseCgiDelegate>

@property (weak, nonatomic) id<WCPayOverseaTransferGetCurrencyCgiDelegate> m_delegate;
@property (retain, nonatomic) WCPayOverseaBaseCgi *m_cgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)startRequestWithWalletType:(int)a0;
- (void)callErrorDelegateWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (void)callOkDelegateWithArgument:(id)a0;
- (void)onWCPayOverseaBaseCgiReturnWithErrorType:(int)a0 ErrorMsg:(id)a1 Dictionary:(id)a2;
- (void)onWCPayOverseaBaseCgiErrorWithRetCode:(int)a0 ErrorMsg:(id)a1;
- (void).cxx_destruct;

@end
