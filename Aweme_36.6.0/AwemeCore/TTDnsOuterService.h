@class NSMutableDictionary;

@interface TTDnsOuterService : NSObject

@property (retain, nonatomic) NSMutableDictionary *dnsQueryMap;

- (void)handleTTDnsResultWithUUID:(id)a0 host:(id)a1 ret:(int)a2 source:(int)a3 cacheSource:(int)a4 ipList:(id)a5 detailedInfo:(id)a6;
- (id)ttDnsResolveWithHost:(id)a0 sdkId:(int)a1 controlHeaders:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
