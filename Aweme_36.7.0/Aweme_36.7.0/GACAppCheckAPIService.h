@class NSString, NSArray, NSURLSession;

@interface GACAppCheckAPIService : NSObject <GACAppCheckAPIServiceProtocol>

@property (readonly, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) NSString *APIKey;
@property (readonly, nonatomic) NSArray *requestHooks;
@property (readonly, nonatomic) NSString *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sendRequestWithURL:(id)a0 HTTPMethod:(id)a1 body:(id)a2 additionalHeaders:(id)a3;
- (id)appCheckTokenWithAPIResponse:(id)a0;
- (id)initWithURLSession:(id)a0 baseURL:(id)a1 APIKey:(id)a2 requestHooks:(id)a3;
- (id)requestWithURL:(id)a0 HTTPMethod:(id)a1 body:(id)a2 additionalHeaders:(id)a3;
- (id)sendURLRequest:(id)a0;
- (id)validateHTTPResponseStatusCode:(id)a0;
- (void).cxx_destruct;
- (id)defaultQueue;

@end
