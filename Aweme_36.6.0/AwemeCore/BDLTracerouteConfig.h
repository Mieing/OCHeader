@class NSArray;

@interface BDLTracerouteConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) double percentage;
@property (nonatomic) long long interval;
@property (nonatomic) long long first_ttl;
@property (nonatomic) long long query_count;
@property (copy, nonatomic) NSArray *domains;

- (void).cxx_destruct;

@end
