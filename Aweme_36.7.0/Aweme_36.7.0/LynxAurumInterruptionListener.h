@interface LynxAurumInterruptionListener : NSObject

@property (nonatomic) void *backend;

- (void)onAppDidBecomeActive:(id)a0;
- (void)onAudioSessionReset;
- (void)onAudioInterrupt:(id)a0;
- (id)init:(void *)a0;

@end
