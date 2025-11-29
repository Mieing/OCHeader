@class RxHTTPWebAccess, NSOperationQueue, NSNotificationCenter;
@protocol RxWebServiceAccessMismatchedCertificateListenerProtocol, RxInjector, RxWebServiceAccessErrorListenerProtocol, RxWebServiceAccessHeaderFieldFillerProtocol, RxHTTPErrorParser;

@interface RxWebServiceAccessBase : NSObject {
    struct { unsigned char _webServiceAccessHeaderFieldFiller_fillHeaderFieldWithURLRequest : 1; unsigned int _reserved : 31; } _flags;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxHTTPWebAccess *httpWebAccess;
@property (readonly, nonatomic) id<RxHTTPErrorParser> httpErrorParser;
@property (readonly, nonatomic) NSOperationQueue *mainQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<RxWebServiceAccessErrorListenerProtocol> webServiceAccessErrorListener;
@property (readonly, nonatomic) id<RxWebServiceAccessMismatchedCertificateListenerProtocol> mismatchedCertificateListener;
@property (readonly, nonatomic) id<RxWebServiceAccessHeaderFieldFillerProtocol> webServiceAccessHeaderFieldFiller;

+ (id)rxInjectorInitializer;

- (id)initWithHttpWebAccess:(id)a0 httpErrorParser:(id)a1 webServiceAccessErrorListener:(id)a2 mismatchedCertificateListener:(id)a3 webServiceAccessHeaderFieldFiller:(id)a4 mainQueue:(id)a5 operationQueue:(id)a6 notificationCenter:(id)a7;
- (id)JSONWithURLRequest:(id)a0 deferred:(id)a1;
- (id)__makeUserInfoForURLRequest:(id)a0;
- (id)jsonObjectFromHTTPResponseData:(id)a0;
- (id)__makeUserInfoForURLRequest:(id)a0 response:(id)a1 startRequestDate:(id)a2 endRequestDate:(id)a3 error:(id)a4;
- (id)__makeUserInfoForURLRequest:(id)a0 response:(id)a1 startRequestDate:(id)a2 endRequestDate:(id)a3;
- (BOOL)isHTTPStatusCodeError:(id)a0;
- (void)handleResponseError:(id)a0 forURLRequest:(id)a1 errorMessage:(id)a2 deferred:(id)a3;
- (BOOL)isMismatchedCertificateError:(id)a0;
- (BOOL)__isNotConnectedToInternetError:(id)a0;
- (long long)webServiceAccessErrorCodeFromMessageErrorCode:(id)a0;
- (id)constructErrorWithErrorCode:(long long)a0 errorMessage:(id)a1 userInfo:(id)a2;
- (void)addQueryItemsToRequest:(id)a0 queryItems:(id)a1;
- (id)JSONWithURLRequest:(id)a0;
- (id)constructRequestWithHTTPMethod:(id)a0 URL:(id)a1 queryItems:(id)a2 body:(id)a3 contentType:(id)a4;
- (id)GETRequestWithURL:(id)a0 queryItems:(id)a1;
- (id)POSTRequestWithURL:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)POSTRequestWithURL:(id)a0 queryItems:(id)a1 data:(id)a2 contentType:(id)a3;
- (id)PUTRequestWithURL:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)DELETERequestWithURL:(id)a0 queryItems:(id)a1;
- (void).cxx_destruct;
- (id)userAgentString;
- (id)dataFromJSON:(id)a0;

@end
