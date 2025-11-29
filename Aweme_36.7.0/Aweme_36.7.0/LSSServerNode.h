@class NSDictionary, NSString;

@interface LSSServerNode : NSObject <NSMutableCopying>

@property (copy) NSDictionary *nodeInfo;
@property (copy, nonatomic) NSString *IP;
@property (readonly, nonatomic) unsigned long long DNSMode;
@property (readonly, nonatomic, getter=isTCPFastOpenAvailable) BOOL TCPFastOpenAvailable;
@property (readonly, nonatomic) BOOL shouldPreconnectWithTCPFastOpen;
@property (readonly, copy, nonatomic) NSString *symbol;

+ (id)nodeWithNodeInfo:(id)a0;

- (BOOL)preconnectWithTCPFastOpen;
- (BOOL)isIpv6Address;
- (BOOL)ipv6TcpProbe;
- (void)updateWithNodeInfo:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValidIPv4Address;

@end
