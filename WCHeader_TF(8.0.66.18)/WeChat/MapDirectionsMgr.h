@class NSString;

@interface MapDirectionsMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestDirections:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; } *)parseRouteWithRouteArray:(id)a0 outCount:(unsigned long long *)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
