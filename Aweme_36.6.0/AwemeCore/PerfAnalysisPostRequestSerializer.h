@interface PerfAnalysisPostRequestSerializer : TTDefaultHTTPRequestSerializer

- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5;
- (id)URLRequestWithURL:(id)a0 params:(id)a1 method:(id)a2 constructingBodyBlock:(id /* block */)a3 commonParams:(id)a4;
- (id)constructRequestsData:(id)a0;
- (id)constructRequestsDataForMethodInfo:(id)a0;
- (id)constructRequestsDataForAnimationLeak:(id)a0;
- (id)constructRequestsDataForTimerFatal:(id)a0;
- (id)constructRequestsDataForDisplayLink:(id)a0;
- (id)constructRequestsDataForJSON:(id)a0;
- (id)constructRequestsDataForHighFreqView:(id)a0;

@end
