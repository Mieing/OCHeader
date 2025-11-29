@class NSString, NSDictionary;

@interface AWEDataLayerBaseNetworkProvider : NSObject <AWEDataLayerBaseNetworkProviderOverride>

@property (copy, nonatomic) NSString *customNetworkMethod;
@property (copy, nonatomic) NSString *customNetworkCacheIdentifier;
@property (copy, nonatomic) NSString *customNetworkRequestUniqueId;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *customNetworkDomain;
@property (copy, nonatomic) NSString *customNetworkURLPath;
@property (nonatomic) BOOL disableParamStringify;
@property (copy, nonatomic) id /* block */ customResponseModelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)networkHeaderFields;
- (id)networkMethod;
- (id)getNetworkParams;
- (id)getNetworkURLPath;
- (id)getNetworkDomain;
- (id)networkRequestUniqueId;
- (id)defaultCacheIdentifier;
- (id)awedl_processoredDataFromResponseObject:(id)a0;
- (void).cxx_destruct;

@end
