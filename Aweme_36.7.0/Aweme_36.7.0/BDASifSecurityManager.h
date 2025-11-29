@class NSString;

@interface BDASifSecurityManager : NSObject <BDXSCCSecureDelegate, BDXSCCSecureDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)setupSecure;

@end
