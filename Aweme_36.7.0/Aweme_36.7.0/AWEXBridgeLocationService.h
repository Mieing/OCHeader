@class NSString;

@interface AWEXBridgeLocationService : NSObject <BDXBridgeLocationServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCurrentLocationWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestLocationPermission:(id)a0 completion:(id /* block */)a1;

@end
