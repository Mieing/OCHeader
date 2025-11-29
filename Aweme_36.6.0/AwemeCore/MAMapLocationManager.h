@class NSString, NSMutableArray;

@interface MAMapLocationManager : NSObject <CLLocationManagerDelegate>

@property (retain, nonatomic) NSMutableArray *bindingArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getMatchedBindingOf:(id)a0;
- (void)bindHandler:(id)a0 toLocationManager:(id)a1;
- (void)willDestroyHandler:(id)a0;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
