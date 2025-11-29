@class NSString, NSMutableDictionary, NSObject;
@protocol KSUPnPDiscovererDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface KSUPnPDiscoverer : NSObject <KSUPnPDeviceStatusObserver> {
    NSObject<OS_dispatch_queue> *_socketQueue;
    int _unicastSocket;
    NSObject<OS_dispatch_source> *_unicastSendingTimer;
    NSObject<OS_dispatch_source> *_unicastReceivingSource;
    int _multicastSocket;
    NSObject<OS_dispatch_source> *_multicastReceivingSource;
}

@property BOOL isDiscoveringDevices;
@property (nonatomic) unsigned long long lastDiscoverySequence;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (weak, nonatomic) id<KSUPnPDiscovererDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (void)_init;
- (void)dealloc;
- (id)createSSDPRequest;
- (void)startDiscoveringDevicesWithConfiguration:(id)a0;
- (void)stopDiscoveringDevices;
- (void)handleDiscoveredDevice:(id)a0 type:(id)a1;
- (BOOL)isUnicastSocketReady;
- (BOOL)setupUnicastSocketWithRequest:(id)a0 error:(id *)a1;
- (void)closeUnicastSocket;
- (void)startSendingUnicastMessagesPeriodicallyWithConfiguration:(id)a0;
- (void)stopSendingUnicastMessagesPeriodically;
- (void)startReceivingUnicastMessages;
- (void)stopReceivingUnicastMessages;
- (BOOL)isMulticastSocketReady;
- (BOOL)setupMulticastSocketWithError:(id *)a0;
- (void)closeMulticastSocket;
- (void)startReceivingMulticastMessages;
- (void)stopReceivingMulticastMessages;
- (void)sendMessageWithSocket:(int)a0 type:(id)a1 request:(id)a2;
- (void)receiveMessageWithSocket:(int)a0 type:(id)a1;
- (void)deviceStatusDidChange:(id)a0;
- (void).cxx_destruct;

@end
