@class NSString, NSArray, NSDate, NSNumber;

@interface TTVideoEngineDomainInfo : NSObject

@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) NSArray *ips;
@property (retain, nonatomic) NSNumber *ttl;
@property (retain, nonatomic) NSDate *requestDate;

- (id)randomIP;
- (BOOL)isCacheValidNow:(long long)a0;
- (void)formateIfIsIpv6;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
