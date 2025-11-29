@class BDXCommonErrorView, BDXSecureSCCConfig, NSString;

@interface BDXSecureSCCHandlerIMP : NSObject <SCCWebViewCustomHandler>

@property (retain, nonatomic) BDXSecureSCCConfig *sccConfig;
@property (retain, nonatomic) BDXCommonErrorView *errorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_createErrorView:(id)a0 withWebView:(id)a1 forURL:(id)a2;
- (id)fetchAllowAndDenyList;
- (BOOL)bdw_URLRiskLevel:(unsigned long long)a0 forReason:(id)a1 withBlockStyle:(id)a2 withWebView:(id)a3 forURL:(id)a4 canGoBack:(BOOL)a5;
- (BOOL)bdw_willSkipSCCCloudCheck:(id)a0 forURL:(id)a1;
- (id)fetchSeclinkParameter;
- (id)fetchExtraInfo;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
