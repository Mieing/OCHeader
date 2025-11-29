@class NSString, NSDictionary, NSURLResponse, NSData, NSURLRequest, NSURL;

@interface AMapRequestReformer : NSObject <AMapRequestReformerProtocol>

@property (nonatomic) BOOL enableHTTPS;
@property (nonatomic) long long timeout;
@property (retain, nonatomic) NSDictionary *additionalParameters;
@property (retain, nonatomic) NSDictionary *HTTPHeaders;
@property (retain, nonatomic) NSURLRequest *netRequest;
@property (retain, nonatomic) NSURLResponse *netResponse;
@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) NSString *baseURL;
@property (readonly, nonatomic) NSString *v6BaseURL;
@property (readonly, nonatomic) NSData *postData;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *v6Url;
@property (readonly, nonatomic) NSString *URLPath;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithReformer:(id)a0 withURL:(id)a1 timeout:(double)a2;
+ (id)requestWithReformer:(id)a0 withURL:(id)a1;
+ (id)v6RequestWithReformer:(id)a0 timeout:(double)a1;
+ (id)requestWithReformer:(id)a0 timeout:(double)a1;
+ (id)v6RequestWithReformer:(id)a0;
+ (id)requestWithReformer:(id)a0;
+ (unsigned long long)cachePolicy;

- (BOOL)isSupportAPM;
- (void)reformParameters:(id)a0 result:(id /* block */)a1;
- (id)httpHeaderAboutAPM;
- (BOOL)canDegrade;
- (void)request:(id)a0 response:(id)a1 metrics:(id)a2 completeWithError:(id)a3;
- (id)assembledURL:(id)a0;
- (BOOL)forceUseUserConfigTimeOut;
- (void).cxx_destruct;
- (id)init;

@end
