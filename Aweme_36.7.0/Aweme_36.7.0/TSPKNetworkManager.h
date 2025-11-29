@class NSString;
@protocol TSPKLock;

@interface TSPKNetworkManager : NSObject

@property (copy, nonatomic) NSString *ipv4NetMask;
@property (copy, nonatomic) NSString *localIPV4Address;
@property (copy, nonatomic) NSString *ipv6NetMask;
@property (copy, nonatomic) NSString *localIPV6Address;
@property (retain, nonatomic) id<TSPKLock> lock;

+ (id)shared;

- (void)onNetworkChanged;
- (unsigned long long)checkIPAddressType:(id)a0;
- (BOOL)checkIfIPAddressInSameSubnet:(id)a0 isIPV6:(BOOL)a1;
- (void)initializeNetworkInfo;
- (BOOL)checkIfIPAddressInSameSubnet:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)currentNetworkStatus;

@end
