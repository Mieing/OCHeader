@class NSString, _TtC21AWEMusicStreamingImpl18PlayDeviceObserver;

@interface AWEMusicStreamingImpl.PlayDeviceObserver : NSObject {
    void /* unknown type, empty encoding */ hasStartedObserve;
    void /* unknown type, empty encoding */ deviceType;
    void /* unknown type, empty encoding */ deviceName;
}

@property (class, nonatomic, readonly) _TtC21AWEMusicStreamingImpl18PlayDeviceObserver *shared;

@property (nonatomic) BOOL isBuiltInDevice;
@property (nonatomic, readonly) NSString *playDeviceName;
@property (nonatomic, readonly) NSString *outputDeviceType;

- (void)receiveNoticWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
