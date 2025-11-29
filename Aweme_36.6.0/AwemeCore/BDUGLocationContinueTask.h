@class NSString, NSMapTable, NSMutableDictionary;

@interface BDUGLocationContinueTask : NSObject <CLLocationManagerDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _taskMapMutex;
}

@property (retain, nonatomic) NSMapTable *subscriptionMap1;
@property (retain, nonatomic) NSMapTable *subscriptionMap2;
@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReceivedWillEnterBackgroundNotification:(id)a0;
- (void)removeAllLocations;
- (void)addLocationWithTarget:(id)a0 desiredAccuracy:(long long)a1 activityType:(long long)a2 pausesLocationUpdatesAutomatically:(BOOL)a3 allowsBackgroundLocationUpdates:(BOOL)a4 distanceFilter:(double)a5 dataLevel:(long long)a6 uploadSource:(id)a7 intelUploadInterval:(double)a8 reverseGeo:(BOOL)a9 option:(id)a10 cert:(id)a11 completionHandler:(id /* block */)a12;
- (void)removeLocationWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
