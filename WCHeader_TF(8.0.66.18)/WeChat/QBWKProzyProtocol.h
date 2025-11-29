@class NSString, NSURLConnection;

@interface QBWKProzyProtocol : NSURLProtocol <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    BOOL _stopLoading;
    NSURLConnection *_nsurlConnection;
    BOOL _isTBSInnerRequest;
    NSString *_originPOSTURLString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;
- (void)stopLoading;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
