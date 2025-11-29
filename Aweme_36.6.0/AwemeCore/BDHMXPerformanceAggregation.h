@class NSMutableDictionary;

@interface BDHMXPerformanceAggregation : NSObject

@property (copy, nonatomic) id /* block */ baseInfoFetcher;
@property (retain, nonatomic) NSMutableDictionary *sessionId;
@property (retain, nonatomic) NSMutableDictionary *perfInfo;
@property (retain, nonatomic) NSMutableDictionary *subResInfo;
@property (retain, nonatomic) NSMutableDictionary *requestJSBInfo;
@property (retain, nonatomic) NSMutableDictionary *webviewPluginInfo;
@property (retain, nonatomic) NSMutableDictionary *mainResInfo;
@property (retain, nonatomic) NSMutableDictionary *perfInfoCompletionForFmp;
@property (retain, nonatomic) NSMutableDictionary *perfInfoCompletionForActualFmp;

- (void)clearIfNeeded:(id)a0 navigationId:(id)a1;
- (id)perfWithNavigationId:(id)a0;
- (long long)actualFmpEndTsWithNavigationId:(id)a0;
- (long long)fmpEndTsWithNavigationId:(id)a0;
- (id)perfInfoCompletionForFmpWithNavigationId:(id)a0;
- (id)leveledPerformanceInfo:(id)a0 levelType:(unsigned long long)a1;
- (void)p_resolvedPerformanceInfoWithNavigationId:(id)a0 endTs:(long long)a1 perfInfoCompletion:(id /* block */)a2;
- (id)perfInfoCompletionForActualFmpWithNavigationId:(id)a0;
- (long long)assumedActualFmpEndTsWithNavigationId:(id)a0;
- (long long)webviewPluginInfoComputeEndTs:(id)a0;
- (id)webViewPluginInfoWithNavigationId:(id)a0;
- (id)p_resolvedSubResourceInfoWithNavigationId:(id)a0 topType:(unsigned long long)a1;
- (long long)resolvedFmpEndTsWithNavigationId:(id)a0;
- (id)resolveInfoSet:(id)a0 WithNavigationId:(id)a1 endTs:(long long)a2 topType:(unsigned long long)a3 infoExtractor:(id /* block */)a4;
- (id)p_resolvedRequestJSBInfoWithNavigationId:(id)a0 topType:(unsigned long long)a1;
- (id)p_resolvedWebViewPluginInfoWithNavigationId:(id)a0 topType:(unsigned long long)a1;
- (id)resolvedMainResourceInfoWithNavigationId:(id)a0;
- (id)resolvedWebViewPluginInfoWithNavigationId:(id)a0 topType:(unsigned long long)a1;
- (id)reorganizeContainerInfoWithJsBase:(id)a0 nativeBase:(id)a1 containerBase:(id)a2 containerInfo:(id)a3 fmpEndTs:(long long)a4 actualFmpEndTs:(long long)a5;
- (id)reorganizeMainResourceInfo:(id)a0 containerInfo:(id)a1;
- (id)reorganizeSubResourceInfo:(id)a0;
- (id)reorganizeRequestJSBInfo:(id)a0;
- (id)reorganizeWebViewPluginInfo:(id)a0;
- (id)initWithBaseInfoFetcher:(id /* block */)a0;
- (void)clearNavigationId:(id)a0;
- (void)collectSessionId:(id)a0 navigationId:(id)a1;
- (void)collectPerformanceInfo:(id)a0 navigationId:(id)a1;
- (void)collectMainResourceInfo:(id)a0 navigationId:(id)a1;
- (void)collectSubResourceInfo:(id)a0 navigationId:(id)a1;
- (void)collectRequestJSBInfo:(id)a0 navigationId:(id)a1;
- (void)collectWebViewPluginInfo:(id)a0 navigationId:(id)a1;
- (void)collectWebViewPluginInfo:(id)a0 fromLastNavigationId:(id)a1;
- (id)resolvedSubResourceInfoWithNavigationId:(id)a0 topType:(unsigned long long)a1;
- (id)resolvedRequestJSBInfoWithNavigationId:(id)a0 topType:(unsigned long long)a1;
- (void)resolvedPerformanceInfoWithNavigationId:(id)a0 levelType:(unsigned long long)a1 waitType:(unsigned long long)a2 perfInfoCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
