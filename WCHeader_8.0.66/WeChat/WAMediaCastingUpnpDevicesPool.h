@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAMediaCastingUpnpDevicesPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *pool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;

- (id)init;
- (void)addDevicesWithLocation:(id)a0 usn:(id)a1 uuid:(id)a2 data:(id)a3 address:(id)a4;
- (void)removeDevicesWithUSN:(id)a0 uuid:(id)a1 address:(id)a2;
- (void)removeAll;
- (id)allDevices;
- (void).cxx_destruct;

@end
