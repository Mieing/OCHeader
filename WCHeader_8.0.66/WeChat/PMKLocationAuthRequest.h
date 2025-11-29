@class NSString, CLLocationManager;

@interface PMKLocationAuthRequest : NSObject <CLLocationManagerDelegate>

@property (copy, nonatomic) id /* block */ resolve;
@property (retain, nonatomic) id retainCycle;
@property (retain, nonatomic) CLLocationManager *manager;
@property (nonatomic) int initialAuthorizationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pRequestWhenInUseAuthorization;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;

@end
