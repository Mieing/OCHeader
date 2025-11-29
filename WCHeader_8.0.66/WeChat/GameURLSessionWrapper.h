@class NSURLSession, NSMutableDictionary, NSString, NSRecursiveLock, GameURLSessionStatistics;
@protocol GameURLSessionWrapperDelegate;

@interface GameURLSessionWrapper : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, INetworkStatusMgrExt> {
    NSRecursiveLock *m_lock;
}

@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableDictionary *sessionTaskToSchemeTaskDict;
@property (retain, nonatomic) NSMutableDictionary *schemeTaskToTryInfoDict;
@property (nonatomic) BOOL isSimpleDnsExptEnable;
@property (nonatomic) unsigned long long webRequestStatus;
@property (retain, nonatomic) NSMutableDictionary *ip2hostDict;
@property (nonatomic) BOOL hasTurnLevelDown;
@property (nonatomic) BOOL isNetWorkDisconnet;
@property (retain, nonatomic) GameURLSessionStatistics *sessionStatistics;
@property (nonatomic) long long simpleReqFailCount;
@property (nonatomic) long long simpleErrorTotalCount;
@property (nonatomic) long long simpleErrorContinuousCount;
@property (weak, nonatomic) id<GameURLSessionWrapperDelegate> delegate;
@property (nonatomic) BOOL isVideoInnerSessionWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidIPAddress:(id)a0;
+ (BOOL)isIPV6Address:(id)a0;

- (id)initWithDelegate:(id)a0;
- (BOOL)rootSimpleDnsEnable;
- (void)startTaskWithRequest:(id)a0 andUrlSchemeTask:(id)a1;
- (void)stopTaskWithUrlSchemeTask:(id)a0;
- (id)getSchemeTaskBySessionTask:(id)a0;
- (BOOL)needUseSimpleDnsForHost:(id)a0 andScheme:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)evaluateServerTrust:(struct __SecTrust { } *)a0 forDomain:(id)a1;
- (BOOL)isDnsError:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)handleCookieForRedirectRequest:(id)a0 fromResponse:(id)a1;
- (void)processCookieOnMainThreadWithResponse:(id)a0;
- (void)processCookieWithResponse:(id)a0;
- (void)resetGameWebRequestStatus;
- (void)resetSessionWrapperOnlyForVideoLoader;
- (void)invalidateAndCleanup;
- (id)getRequestCookieHeaderForURL:(id)a0;
- (id)getRequestCookieHeaderForHost:(id)a0;
- (id)searchLocalCookiesForUrl:(id)a0;
- (BOOL)cookieFilterWithCookie:(id)a0 andUrl:(id)a1;
- (void).cxx_destruct;

@end
