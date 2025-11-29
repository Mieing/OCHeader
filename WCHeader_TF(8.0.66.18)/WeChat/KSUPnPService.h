@class NSString, KSUPnPDiscoverer, NSDictionary;
@protocol KSUPnPServiceObserver;

@interface KSUPnPService : NSObject <KSUPnPDiscovererDelegate>

@property (copy, nonatomic) NSString *UUID;
@property (retain, nonatomic) KSUPnPDiscoverer *discoverer;
@property (weak, nonatomic) id<KSUPnPServiceObserver> observer;
@property (readonly, nonatomic) BOOL isDiscoveringDevices;
@property (readonly, copy, nonatomic) NSDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultService;

- (id)init;
- (void)startDiscoveringDevicesWithConfiguration:(id)a0;
- (void)stopDiscoveringDevices;
- (void)UPnPDiscoverer:(id)a0 didDiscoverDevice:(id)a1;
- (void)UPnPDiscoverer:(id)a0 didUpdateDevice:(id)a1;
- (void).cxx_destruct;

@end
