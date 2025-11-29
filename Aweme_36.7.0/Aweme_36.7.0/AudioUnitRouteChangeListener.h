@interface AudioUnitRouteChangeListener : NSObject {
    void *mAudioUnitBackend;
}

+ (id)sharedInstance;

- (void)startListen:(void *)a0;
- (void)audioSessionRouteChange:(id)a0;
- (void)stopListen;

@end
