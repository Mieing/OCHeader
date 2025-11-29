@class NSNumber, NSString;

@interface LiveIPInfo : NSObject

@property (retain, nonatomic) NSNumber *ttl;
@property (copy, nonatomic) NSString *ipString;
@property (nonatomic) BOOL isLocalDNS;
@property (retain, nonatomic) NSNumber *packageLossRate;
@property (nonatomic) float averagePingTime;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
