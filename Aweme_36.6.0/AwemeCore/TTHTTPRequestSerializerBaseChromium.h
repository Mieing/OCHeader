@class NSString, NSSet;

@interface TTHTTPRequestSerializerBaseChromium : NSObject <TTHTTPRequestSerializerProtocol>

@property (copy, nonatomic) NSString *defaultUserAgentString;
@property (retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5;
- (id)URLRequestWithURL:(id)a0 params:(id)a1 method:(id)a2 constructingBodyBlock:(id /* block */)a3 commonParams:(id)a4;
- (id)URLRequestWithRequestModel:(id)a0 commonParams:(id)a1;
- (void)_buildRequestHeaders:(id)a0;
- (id)URLRequestWithURL:(id)a0 headerField:(id)a1 params:(id)a2 method:(id)a3 constructingBodyBlock:(id /* block */)a4 commonParams:(id)a5 bypassXWwwFormUrlencoded:(BOOL)a6;
- (void).cxx_destruct;
- (id)init;
- (id)userAgentString;

@end
