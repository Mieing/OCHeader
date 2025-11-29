@class NSURLComponents, NSString, NSDictionary, NSURL, SECHybridPageTrace, NSData, NSArray;

@interface SECWebNetModel : NSObject <SECNetTrafficProtocol> {
    NSURLComponents *_URLComponents;
    NSDictionary *_requestDataTags;
    BOOL _requestTagFlag;
}

@property (copy, nonatomic) NSURL *webURL;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSString *netType;
@property (copy, nonatomic) NSString *requstMethod;
@property (nonatomic) BOOL mainFrame;
@property (nonatomic) long long navigationType;
@property (copy, nonatomic) NSDictionary *responseHeaders;
@property (nonatomic) long long responseCode;
@property (retain, nonatomic) SECHybridPageTrace *routeTrace;
@property (copy, nonatomic) NSData *requestBody;
@property (nonatomic) double happen;
@property (copy, nonatomic) NSArray *backtraces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reportParams;
- (id)rulerParams;
- (id)URLPath;
- (id)purifiedURL;
- (id)URLQuery;
- (id)reportExtra;
- (void)resolveRequestTag;
- (id)requestDataTags;
- (double)happenTime;
- (void).cxx_destruct;
- (id)URLString;
- (id)URLScheme;
- (id)URLHost;
- (id)requestHeader;

@end
