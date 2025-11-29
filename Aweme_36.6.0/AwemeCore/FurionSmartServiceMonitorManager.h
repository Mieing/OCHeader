@class NSString, NSMutableDictionary;

@interface FurionSmartServiceMonitorManager : NSObject <FurionSmartServiceMonitorManager> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *monitorMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
