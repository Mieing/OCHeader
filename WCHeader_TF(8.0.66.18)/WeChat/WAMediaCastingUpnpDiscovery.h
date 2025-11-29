@class NSTimer, WAMediaCastingUpnpDevicesPool, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, WAMediaCastingUpnpDiscoveryDelegate;

@interface WAMediaCastingUpnpDiscovery : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) WAMediaCastingUpnpDevicesPool *devicesPool;
@property (nonatomic) int fd;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSTimer *sendTimer;
@property (weak, nonatomic) id<WAMediaCastingUpnpDiscoveryDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)cancelSearch;
- (void)searchWithTimeout:(double)a0;
- (void)openBroadcast;
- (void)sendBroadcast;
- (void)timeTick;
- (void)raiseError:(id)a0;
- (void)close;
- (id)searchRequestData;
- (void)onReceiveData:(id)a0 address:(id)a1;
- (void)handleLocation:(id)a0 usn:(id)a1 uuid:(id)a2 address:(id)a3;
- (void)handleDeviceByeByeWith:(id)a0 uuid:(id)a1 address:(id)a2;
- (void)notifyDeviceChanged;
- (void).cxx_destruct;

@end
