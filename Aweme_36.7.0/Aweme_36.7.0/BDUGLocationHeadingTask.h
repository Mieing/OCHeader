@class NSString, NSMapTable, CLLocationManager;

@interface BDUGLocationHeadingTask : NSObject <CLLocationManagerDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskMapMutex;
}

@property (retain, nonatomic) NSMapTable *headingMap;
@property (retain, nonatomic) CLLocationManager *headingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTask;

- (void)removeAllLocations;
- (void)_clearLocation;
- (void)removeLocationWithTarget:(id)a0;
- (void)addHeadingWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)dealloc;

@end
