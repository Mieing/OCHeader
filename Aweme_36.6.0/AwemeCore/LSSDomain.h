@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface LSSDomain : NSObject <NSCopying>

@property (copy) NSDictionary *domainInfo;
@property (copy) NSString *requestID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSMutableArray *localDNSNodes;
@property (copy, nonatomic) NSMutableArray *selectedNodes;
@property (copy, nonatomic) NSMutableArray *preconnectedNodeIPs;
@property (copy, nonatomic) NSMutableDictionary *localDNSNodesMap;
@property (copy, nonatomic) NSMutableDictionary *selectedNodesMap;
@property (copy, nonatomic) NSString *connectionStatus;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL shouldUseHTTPDNS;
@property (nonatomic) BOOL localDNSParseTimeout;
@property (nonatomic) BOOL hasFinishedLocalDns;
@property (readonly, copy, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSMutableDictionary *preProcessInfo;
@property (nonatomic) unsigned long long runningStatus;

+ (id)domainWithDomainInfo:(id)a0;

- (void)updateWithDomainInfo:(id)a0;
- (void)_updateSelectedNodes:(id)a0;
- (void)_updateLocalDNS;
- (id)currentAvailableNodes;
- (void)updateLocalDNSRecord:(id)a0;
- (id)copyLocalDNSNodes;
- (id)copySelectedNodes;
- (void)getIpResultFromList:(long long)a0 requiredIpCount:(long long)a1 recordIpList:(id)a2 ipList:(id *)a3 ipSet:(id *)a4;
- (id)lightCopyForOnlyDomainName;
- (void)updateSelectedNodes:(id)a0 userInfo:(id)a1;
- (void)updateLocalDNS;
- (void)preconnectTCPFastOpenAvailableNodes;
- (unsigned long long)checkIpv6Nodes;
- (unsigned long long)checkUdpNodes;
- (id)getIpListByKey:(long long)a0 requiredIpCount:(long long)a1;
- (void)updateLocalDNSWithConnectionStatus:(id)a0;
- (void)updateSelectedNodesWithConnectionStatus:(id)a0 userInfo:(id)a1 connectionStatus:(id)a2;
- (void)flush;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
