@class NSString, NSArray, NSDate;

@interface TVLDNSCache : NSObject {
    NSDate *_expiredDate;
}

@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSArray *resolvedIPAddresses;
@property (readonly, nonatomic, getter=hasExpired) BOOL expired;
@property (readonly, nonatomic) double timeToLive;

+ (id)cacheWithHostname:(id)a0 resolvedIPAddresses:(id)a1 timeToLive:(double)a2;

- (id)initWithHostname:(id)a0 resolvedIPAddresses:(id)a1 timeToLive:(double)a2;
- (void).cxx_destruct;

@end
