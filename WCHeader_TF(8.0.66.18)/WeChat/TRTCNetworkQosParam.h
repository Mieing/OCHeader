@interface TRTCNetworkQosParam : NSObject

@property (nonatomic) long long preference;
@property (nonatomic) long long controlMode;

- (struct QosConfigParams { int x0; struct Optional<trtc::VideoQosPreference> { struct OptionalStorage<trtc::VideoQosPreference, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x1; struct Optional<trtc::QosAppScene> { struct OptionalStorage<trtc::QosAppScene, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x2; struct Optional<int> { struct OptionalStorage<int, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x3; struct Optional<int> { struct OptionalStorage<int, true, true> { BOOL x0; union { char x0; int x1; } x1; } x0; } x4; })convertToCppParams;
- (id)init;

@end
