@class NSString, NSDictionary;

@interface ArgusResourceLoaderNetworkParams : ArgusBaseAsepctParams

@property (nonatomic) long long loaderType;
@property (readonly, copy, nonatomic) NSString *loadTypeName;
@property (nonatomic) BOOL forestUseNSURLSession;
@property (copy, nonatomic) NSString *requestUrl;
@property (copy, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSString *requestFromSchema;
@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *rewriteUrl;
@property (retain, nonatomic) NSDictionary *rewriteHeaders;

- (void).cxx_destruct;

@end
