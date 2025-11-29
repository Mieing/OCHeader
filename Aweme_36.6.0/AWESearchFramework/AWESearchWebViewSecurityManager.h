@class NSString;

@interface AWESearchWebViewSecurityManager : NSObject <BDXSCCSecureDelegate, BDXSCCSecureDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bdx_sccShouldInterceptWithLevel:(unsigned long long)a0 forReason:(id)a1 withWebView:(id)a2 forURL:(id)a3 canGoBack:(BOOL)a4;
- (void)bdx_sccDidInterceptWithLevel:(unsigned long long)a0 forReason:(id)a1 withWebView:(id)a2 forURL:(id)a3 canGoBack:(BOOL)a4;
- (BOOL)bdx_sccShouldSkipChecking:(id)a0 forURL:(id)a1 sccConfig:(id)a2;
- (void)bdx_sccOnRetryWithRiskInfo:(id)a0 withErrorView:(id)a1 withWebView:(id)a2 forURL:(id)a3 sccConfig:(id)a4;
- (id)bdx_sccFetchSeclinkParameter;
- (id)bdx_sccFetchExtraInfo;
- (void)bdx_noticeDisableCreateErrorView:(id)a0 withWebView:(id)a1 forURL:(id)a2;
- (id)bdx_sccErrorViewConfig:(id)a0;
- (void)setupSecure;
- (id)searchWebSecurityContentConfig;
- (void)trackSCCJumpRejectClickWithWebView:(id)a0 clickButton:(unsigned long long)a1;
- (void)trackSCCJumpRejectWithWebView:(id)a0;
- (BOOL)needTrackSccPageBack;
- (BOOL)needTrackRequestURL;
- (id)commonTrackParamsWithWebView:(id)a0;

@end
