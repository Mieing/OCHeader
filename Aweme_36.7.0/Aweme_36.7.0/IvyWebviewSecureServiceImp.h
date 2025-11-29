@interface IvyWebviewSecureServiceImp : NSObject <IvyKit.IvyWebviewSecureService, BDXSCCSecureDelegate, BDXSCCSecureDataSource> {
    void /* unknown type, empty encoding */ errorIcon;
}

- (void)setErrorIcon:(id)a0;
- (id)bdx_sccErrorBackground:(unsigned long long)a0;
- (id)bdx_sccErrorIcon:(unsigned long long)a0;
- (id)bdx_sccErrorTitle:(unsigned long long)a0;
- (id)bdx_sccErrorTitleColor:(unsigned long long)a0;
- (id)bdx_sccErrorDescription:(unsigned long long)a0;
- (id)bdx_sccErrorDescriptionColor:(unsigned long long)a0;
- (id)bdx_sccErrorRetryButton:(unsigned long long)a0;
- (id)bdx_sccErrorRetryButtonColor:(unsigned long long)a0;
- (id)bdx_sccErrorRetryButtonBackgroundColor:(unsigned long long)a0;
- (BOOL)bdx_sccShouldInterceptWithLevel:(unsigned long long)a0 forReason:(id)a1 withWebView:(id)a2 forURL:(id)a3 canGoBack:(BOOL)a4;
- (void)bdx_sccOnRetry:(id)a0 webView:(id)a1 errorLevel:(unsigned long long)a2 forReason:(id)a3 forURL:(id)a4 canGoBack:(BOOL)a5 sccConfig:(id)a6;
- (void)bdx_sccDidInterceptWithLevel:(unsigned long long)a0 forReason:(id)a1 withWebView:(id)a2 forURL:(id)a3 canGoBack:(BOOL)a4;
- (BOOL)bdx_sccShouldSkipChecking:(id)a0 forURL:(id)a1 sccConfig:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
