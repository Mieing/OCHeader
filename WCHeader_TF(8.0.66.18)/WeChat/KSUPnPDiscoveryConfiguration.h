@class NSString;

@interface KSUPnPDiscoveryConfiguration : NSObject

@property (copy, nonatomic) NSString *searchTarget;
@property (nonatomic) double discoverTimeInterval;

- (id)init;
- (void).cxx_destruct;

@end
