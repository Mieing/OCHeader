@class NSString, NSMutableSet, AWEIMFakeBlackScreenHelper;

@interface AWEIMProximitySensorManager : HTSService <AWEIMProximitySensorManagerProtocol>

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) AWEIMFakeBlackScreenHelper *fakeBlackScreenHelper;
@property (nonatomic) BOOL hasCheckedSensorAvailability;
@property (nonatomic) BOOL isProximitySensorAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceScopeType;

- (void)proximityMonitorStateChangeNotification:(id)a0;
- (void)addProximityStateObserver:(id)a0;
- (void)removeProximityStateObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
