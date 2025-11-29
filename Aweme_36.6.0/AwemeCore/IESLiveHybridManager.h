@class NSArray, NSString, WKWebView;
@protocol IESLiveWebViewService, IESLiveLanguageService, IESLiveDebugService;

@interface IESLiveHybridManager : NSObject

@property (copy, nonatomic) NSArray *innerDomains;
@property (nonatomic) BOOL hasInjectedBaseInnerDomains;
@property (copy, nonatomic) NSString *systemUserAgent;
@property (retain, nonatomic) WKWebView *uaWebView;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) id<IESLiveDebugService> debugService;

+ (id)shared;

- (id)hostUserAgent;
- (void)addPrivateDomains:(id)a0;
- (id)fetchSystemUserAgent;
- (id)whiteList;
- (BOOL)inWhiteListWith:(id)a0;
- (id)forceFetchSystemUserAgent;
- (void)registerUserAgentWithWKWebView:(id)a0;
- (void)configInnerDomainsIfNeed;
- (void)addInnerDomainsFromSettings;
- (BOOL)isOfflineForURL:(id)a0;
- (id)offlineMetaForURL:(id)a0;
- (id)absoluteUserAgent;
- (void)buildInnerDomains;
- (id)didReceiveSystemUA:(id)a0;
- (id)uaRemoveBlankIfNeed:(id)a0;
- (id)fetchTaroPathIfExists:(id /* block */)a0;
- (id)extraJSPathFromGeckoWithURL:(id)a0 lynxRuntimeFileName:(id)a1 metaData:(id *)a2;
- (id)extraJSPathFromCDNWithURL:(id)a0 lynxRuntimeFileName:(id)a1;
- (id)fetchTaroPathIfExists;
- (void).cxx_destruct;
- (id)init;
- (id)customUserAgent;

@end
