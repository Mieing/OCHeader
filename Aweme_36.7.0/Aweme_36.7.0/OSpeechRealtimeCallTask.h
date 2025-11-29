@interface OSpeechRealtimeCallTask : NSObject

- (int)initNative;
- (int)sendHostInjectionUplinkData:(id)a0;
- (int)setSpeechLinkLayer:(id)a0;
- (int)setLocalParam:(long long)a0 param:(id)a1;
- (int)stop;
- (int)destroy;
- (int)start;

@end
