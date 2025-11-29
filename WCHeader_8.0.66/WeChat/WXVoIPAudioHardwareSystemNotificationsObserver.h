@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WXVoIPAudioHardwareSystemNotificationsObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *systemStatusObserver;
@property (nonatomic) int playHardwareVolume;
@property (nonatomic) BOOL isCaptureObservationStarted;
@property (nonatomic) BOOL isPlayObservationStarted;
@property (nonatomic) struct AudioHardwareSystemNotificationsCallback { void /* function */ **x0; } *callback;
@property BOOL isOtherAPPPlaying;
@property BOOL isInVOIPMode;
@property int playDeviceType;

+ (int)getPlayHardwareVolume;

- (id)init:(id)a0;
- (void)startCaptureObservation:(const struct Hardware { int x0; } *)a0;
- (void)restartCaptureObservation:(const struct Hardware { int x0; } *)a0;
- (void)stopCaptureObservation;
- (void)startPlayObservation:(const struct Hardware { int x0; } *)a0;
- (void)restartPlayObservation:(const struct Hardware { int x0; } *)a0;
- (void)stopPlayObservation;
- (void)observeIfPlayOrCaptureFirstStarted;
- (void)stopObservingIfPlayAndeCaptureBothStopped;
- (void)observeSystemStatus;
- (void)stopObservingSystemStatus;
- (void)observeSystemNotifications;
- (void)stopObservingSystemNotifications;
- (void)handleIfOtherAPPPlayingStateChanged;
- (void)reportHardwareVolumeIfChanged;
- (void)handleRouteChange:(id)a0;
- (struct RouteChangeDetails { unsigned long long x0; id x1; })getRouteChangeDetails:(id)a0;
- (void)reportRouteChangeEvent:(id)a0 result:(struct DeviceErrorApple { void /* function */ **x0; long long x1; int x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; })a1;
- (void).cxx_destruct;

@end
