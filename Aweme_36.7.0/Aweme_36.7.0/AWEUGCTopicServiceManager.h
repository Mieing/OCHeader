@class NSMapTable;

@interface AWEUGCTopicServiceManager : NSObject

@property (retain, nonatomic) NSMapTable *serviceMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getServiceForUID:(id)a0;
- (void)registerService:(id)a0 forUID:(id)a1;
- (void)removeServiceForUID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
