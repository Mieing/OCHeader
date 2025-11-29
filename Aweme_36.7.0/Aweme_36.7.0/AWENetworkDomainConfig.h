@class NSArray, NSString;

@interface AWENetworkDomainConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *frontierURLList;
@property (copy, nonatomic) NSArray *shareCookieURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareCookieURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
