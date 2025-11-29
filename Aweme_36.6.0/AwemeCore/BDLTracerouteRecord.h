@class NSString, NSArray;

@interface BDLTracerouteRecord : NSObject

@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSArray *recvDurations;
@property (nonatomic) long long total;
@property (nonatomic) long long ttl;

- (void).cxx_destruct;
- (id)description;

@end
