@class NSString, BDAPCallParams, NSURLSession;

@interface BDAPFetcher : NSObject

@property (copy, nonatomic) NSString *hostURL;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) BDAPCallParams *params;
@property (nonatomic) double timeoutInterval;

- (id)URLWithString:(id)a0 queryItems:(id)a1;
- (void)fetchVirtualNumberFromADSDKCompletion:(id /* block */)a0;
- (id)requestURLWithPhoneKey:(id)a0;
- (id)requestBodyDic;
- (id)authenticateFromADManager;
- (id)requestHeaderAuthFromADManager:(id)a0;
- (id)authenticateWithContent:(id)a0;
- (id)requestHeaderWithAuth:(id)a0;
- (void)fetchVirtualNumberCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)behaviors;
- (id)requestBody;
- (id)initWithParams:(id)a0;
- (id)webRequest;
- (id)logId;

@end
