@interface IESIMPPBRequestSerializer : TTDefaultHTTPRequestSerializer

- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5;
- (id)URLRequestWithURL:(id)a0 params:(id)a1 method:(id)a2 constructingBodyBlock:(id /* block */)a3 commonParams:(id)a4;
- (id)p_bodyDataWithParams:(id)a0;
- (void)p_fillRequest:(id)a0 bodyData:(id)a1;

@end
