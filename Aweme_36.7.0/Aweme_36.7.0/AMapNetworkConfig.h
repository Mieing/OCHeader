@class NSString, NSMutableDictionary, AMapIPV6NetConfig;

@interface AMapNetworkConfig : NSObject

@property (retain) NSMutableDictionary *ipv6HostStatist;
@property (nonatomic) BOOL ipV6Cloud;
@property BOOL enableIPV6;
@property (copy) NSString *proxyAddress;
@property (readonly) AMapIPV6NetConfig *netConfig;

+ (id)sharedInstance;

- (void)setNetConfig:(id)a0;
- (BOOL)isUseIPV6WithReformer:(id)a0;
- (void)statistIpV6:(id)a0 error:(id)a1;
- (void)loadFromLocalCache;
- (void)saveToLocalCache;
- (void).cxx_destruct;
- (id)init;

@end
