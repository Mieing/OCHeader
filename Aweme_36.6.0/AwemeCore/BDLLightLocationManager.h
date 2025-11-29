@class BDLLightLocationResult, NSMutableArray;

@interface BDLLightLocationManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lightLocationDoneMutex;
}

@property (retain) BDLLightLocationResult *lightLocationresult;
@property BOOL hasConsumed;
@property (nonatomic) BOOL isDone;
@property (retain, nonatomic) NSMutableArray *monitorDoneArray;
@property BOOL isAfterMonitorDoneCompletion;

+ (id)sharedInstance;

- (void)requestLightLocationWithAccuracy:(long long)a0;
- (id)getLightLocation;
- (void)addMonitorForLightLocationDoneWithCompletion:(id /* block */)a0;
- (void)lightLocationDone;
- (void)getCoreLocationLastLocationWithAccuracy:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
