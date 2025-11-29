@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface VoIPMPV2DeviceFlutterApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onDevicePhysicalOrientationChangedDegree:(long long)a0 completion:(id /* block */)a1;
- (void)onRemoteDevicePhysicalOrientationChangedDegree:(long long)a0 completion:(id /* block */)a1;
- (void)onSystemRotateLockedChangedLocked:(BOOL)a0 completion:(id /* block */)a1;
- (void)onLocalUiOrientationChangedDegree:(long long)a0 completion:(id /* block */)a1;
- (void)onLocalNaturalOrientationChangedDegree:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
