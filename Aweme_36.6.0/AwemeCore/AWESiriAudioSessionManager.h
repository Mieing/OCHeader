@interface AWESiriAudioSessionManager : NSObject

+ (id)sharedManager;

- (BOOL)enableMonitor;
- (void)monitorAudioSessionRouteChangeIfNeeded;
- (void)audioRouteChanged:(id)a0;
- (void)checkBluetoothAudioStatus;
- (void)dealloc;

@end
