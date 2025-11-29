@class NSMapTable, NSString, CLHeading, CLLocationManager;

@interface BDXLynxMapLocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *manager;
@property (retain, nonatomic) NSMapTable *headingSubscriptionMap;
@property (readonly, copy, nonatomic) CLHeading *heading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)headingAvailable;
+ (id)sharedInstance;

- (void)subscribeToHeadingUpdatesForTarget:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeToHeadingUpdatesForTarget:(id)a0;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (id)init;

@end
