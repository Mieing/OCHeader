@class NSString, NSArray;

@interface WCFinderNewDnsObj : NSObject

@property (retain, nonatomic) NSString *host;
@property (copy) NSArray *iplist;
@property (nonatomic) BOOL bUseDCIP;
@property (nonatomic) unsigned int lastNewDNSTime;

- (BOOL)isNeedUpdateIpList;
- (void)doNewDns;
- (void).cxx_destruct;

@end
