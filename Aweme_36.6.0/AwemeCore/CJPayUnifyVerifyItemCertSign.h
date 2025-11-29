@class CJPayUnifyInstallCertViewController;

@interface CJPayUnifyVerifyItemCertSign : CJPayUnifyBaseVerifyItem

@property (retain, nonatomic) CJPayUnifyInstallCertViewController *installVC;

- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)p_preCheckCertStatus;
- (void)p_signDataWithParams:(id)a0;
- (void)p_showCertInstallPage;
- (void)p_startInstallCert;
- (void)p_callbackWithResultType:(unsigned long long)a0 data:(id)a1;
- (void)p_showCertInstallFailAlert;
- (BOOL)p_needSignInCurProcess;
- (void).cxx_destruct;

@end
