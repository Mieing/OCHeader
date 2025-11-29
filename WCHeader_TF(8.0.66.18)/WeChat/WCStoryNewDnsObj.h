@class NSString, NSArray;

@interface WCStoryNewDnsObj : NSObject

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSArray *iplist;
@property (nonatomic) BOOL bUseDCIP;
@property (nonatomic) unsigned int lastNewDNSTime;

- (BOOL)isNeedUpdateIpList;
- (void)doNewDns;
- (void).cxx_destruct;

@end
