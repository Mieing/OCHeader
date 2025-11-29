@class NSString;

@interface SECRouteDummyAction : NSObject <SECRouteActionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeTraffic:(id)a0;

@end
