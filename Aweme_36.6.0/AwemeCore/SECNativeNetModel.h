@class NSString, NSDictionary, NSURLComponents, TMNetworkContext;

@interface SECNativeNetModel : NSObject <SECNetTrafficProtocol> {
    NSURLComponents *_URLComponents;
    NSDictionary *_requestDataTags;
    BOOL _requestTagsFlag;
    NSDictionary *_queryDict;
}

@property (retain, nonatomic) TMNetworkContext *netContext;
@property (copy, nonatomic) NSString *netType;
@property (nonatomic) double happen;
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
- (id)backtraces;
- (id)URLString;
- (id)requestBody;
- (id)URLComponents;
- (id)URLScheme;
- (id)URLHost;
- (id)requestHeader;

@end
